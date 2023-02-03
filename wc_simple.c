#include <unistd.h>
#include <stdio.h>

#define OUT 0
#define IN 1

int main()
{
    char    buffer;
    int     r;
    int     count_word;
    int     count_char;
    int     count_new_line;
    int     state;

    count_word = 0;
    count_char = 0;
    count_new_line = 0;
    state = OUT;
    while ((r = read(0, &buffer, 1)))
    {
        count_char++;
        if (buffer == '\n')
            count_new_line++;
        if (buffer == ' ' || buffer == '\t' || buffer == '\n')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            count_word++;
        }
    }
    printf("%d\t%d\t%d\n", count_new_line, count_word, count_char);
    return 0;
}
