#include <unistd.h>
#include <stdio.h>

int main()
{
    int digit[10];
    int i;
    int r;
    char buffer;
    int delimiters;
    int other;

    delimiters = 0;
    other = 0;
    for (i = 0; i < 10; ++i)
        digit[i] = 0;
    while ((r = read(0, &buffer, 1)))
    {
        if (buffer >= '0' && buffer <= '9')
            digit[buffer - '0']++;
        else if (buffer == ' ' || buffer == '\t' || buffer == '\n')
            delimiters++;
        else
            other++;
    }
    printf("Цифры (от 0 до 9):");
    for (i = 0; i < 10; i++)
        printf(" %d", digit[i]);
    printf(". Символы - разделители: %d. Другие символы: %d", delimiters, other);
    return 0;
}
