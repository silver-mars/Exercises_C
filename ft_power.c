#include <stdio.h>

int ft_power(int base, int n);

int main()
{
    int x;
    for (x = 1; x <= 10; x++)
        printf("2 ** %d = %d\n", x, ft_power(2, x));
    return 0;
}

int ft_power(int base, int n)
{
    int result;

    result = 1;
    while (n--)
        result *= base;
    return result;
}
