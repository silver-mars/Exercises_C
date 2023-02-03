#include <unistd.h>
#include <stdio.h>

/* Эта функция не работает для определения ошибки в вводе (ferror).
Впоследствии разобраться и сделать как полагается, пока же - пользоваться классическим getchar
в тех моментах, где нужно искать ошибки ввода */
int ft_getchar(void)
{
    int     x;

    x = getchar();
    if (x == EOF)
    {
        printf("function feof(stdin) = %d\n", feof(stdin));
        printf("function ferror(stdin) = %d\n", ferror(stdin));
        if (ferror(stdin))
        {
            perror("getchar failed");
            return -1;
        }
        printf("End of file\n");
        return 0;
    }
    return x;
}

int main()
{
    int x;

    x = ft_getchar();
    printf("%d\n", x);
    printf("You are entered %c\n", (char)x);
    return 0;
}
