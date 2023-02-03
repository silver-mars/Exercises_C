#include "ft_catlib.h"

void    ft_stdin(void)
{
    char    buffer;
    int     r;
    int     count_tab;
    int     count_space;
    int     count_new_line;

    count_tab = 0;
    count_space = 0;
    count_new_line = 0;
    while ((r = read(0, &buffer, 1)))
    {
        write(1, &buffer, 1);
        if (buffer == '\n')
            ++count_new_line;
        else if (buffer == ' ')
            ++count_space;
        else if (buffer == '\t')
            ++count_tab;
    }
    printf("\nЧисло новых строк: %d\n", count_new_line);
    printf("\nЧисло пробелов: %d\n", count_space);
    printf("\nЧисло знаков табуляций: %d\n", count_tab);
}
