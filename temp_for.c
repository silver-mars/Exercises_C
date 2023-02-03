#include <stdio.h>

#define LOWER 0 // lower of table
#define UPPER 300 // upper of table
#define STEP 20 // step increase temperature

/* print temp by Celsius and Farenheitus in reverse format (quest by Brian & Kernighan)*/

int main()
{
    int fahr;
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
        /* Здесь мы подставляем в printf в качестве второго аргумента выражение.
        В любом контексте, где возможно использовать значение переменной какого-то типа,
        можно использовать более сложное выражение того же типа. */
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    return 0;
}
