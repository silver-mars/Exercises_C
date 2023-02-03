#include <unistd.h>

#define IN 1
#define OUT 0

void    ft_putchar(char c);

int main()
{
    char    buffer;
    int     r;
    int     space;

    space = OUT;
    while ((r = read(0, &buffer, 1)))
    {
        if (buffer == ' ' || buffer == '\t' || buffer == '\n')
        {
            if (space == OUT)
                {
                    ft_putchar('\n');
                    space = IN;
                }
        }
        else
        {
            space = OUT;
            ft_putchar('*');
        }
    }
    return 0;
}
