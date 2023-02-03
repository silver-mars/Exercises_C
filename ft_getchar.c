#include "ft_brian.h"

/* Эта функция не работает для определения ошибки в вводе (ferror).
Впоследствии разобраться и сделать как полагается, пока же - пользоваться классическим getchar
в тех моментах, где нужно искать ошибки ввода */
int ft_getchar(void)
{
    int    buffer;
    int     x;

    x = read(0, &buffer, 1);
    if (x == -1)
    {
        if (errno)
        {
            perror("perror()");
            return -1;
        }
    }
    return buffer;
}
