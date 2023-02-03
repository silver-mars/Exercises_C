#include <stdio.h>

int main()
{
    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        printf("\n%d\n", (c = getchar()) != EOF);
    }
    printf("%d", EOF);
    return 0;
}
