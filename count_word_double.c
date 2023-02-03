#include <stdio.h>

int main()
{
    double  nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ; // по правилам тело цикла for должно быть. Запятую можно не выносить на отдельную строчку.
    printf("%.0f\n", nc);
    return (0);
}
