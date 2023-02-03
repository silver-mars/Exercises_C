#include <stdio.h>

int main()
{
    int chr;
    int nl;

    nl = 0;
    while ((chr = getchar()) != EOF)
        if (chr == '\n')
            ++nl;
    printf("%d\n", nl);
    return(0);
}
