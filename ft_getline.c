#include "ft_brian.h"

int ft_getline(char str[], int lim)
{
    int i;
    int c;

    for (i = 0; i < lim-1 && (c = ft_getchar()) != EOF && c != '\n'; i++)
        str[i] = c;
    if (c == '\n')
    {
        str[i] = c;
        i++;
        // Попробовать попозже сократить в str[i++] = c;
    }
    str[i] = '\0';
    return i;
}
