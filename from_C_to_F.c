#include <stdio.h>

float   farenheit(int celsius)
{
    return celsius * (9.0/5.0) + 32;
}

int main()
{
    int celsius;
    int lower;
    int upper;
    int step;

    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;
    printf("Celsius\tFahrenheit\n");
    while (celsius <= upper)
    {
        printf("%3d \t%6.1f\n", celsius, farenheit(celsius));
        celsius += step;
    }
    return 0;
}
