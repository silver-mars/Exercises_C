#include <unistd.h>
#include <stdio.h>

int main()
{
    char    buffer;
    char    symbols[94];
    int     r;
    int     i;
    int     count;

    count = 0;
    for (i = 0; i < 94; i++)
        symbols[i] = 0;
    while ((r = read(0, &buffer, 1)))
    {
        if (buffer >= ' ' && buffer <= '~')
            symbols[buffer - ' ']++;
    }
    for (i = 0; i < 94; i++)
    {
        if (symbols[i] > 0)
        {
            printf("%c - ", i + ' ');
            while (symbols[i] > count)
            {
                printf("*");
                count++;
            }
            count = 0;
            printf("\n");
        }
    }
    return 0;
}
