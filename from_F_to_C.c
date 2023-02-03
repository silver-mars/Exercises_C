#include <stdio.h>

/* Print table temperatures for Celsius and
Farenheitus, for fahr = 0, 20, ..., 300 */

float   celsius(int fahr)
{
    return 5.0/9.0 * (fahr-32);
}

int main()
{
    int fahr;
    int lower;
    int upper;
    int step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("Farenheit Celsius\n");
    while (fahr <= upper)
    {
        printf("%3d \t %6.1f\n", fahr, celsius(fahr));
        fahr += step;
    }
    return 0;
}
