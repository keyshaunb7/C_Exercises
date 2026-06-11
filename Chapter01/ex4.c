#include <stdio.h>
int main()
{
    float fahr,celcius;
    float lower, upper , step ;

    lower = 0.0;
    upper = 100.0;
    step = 20.0;

    celcius = lower;
    printf("Celcius\t Fahrenheit\n");
    while (celcius<=100)
    {
        fahr = (celcius*9.0/5.0) + 32.0;
        printf("%3.0f\t %6.1f\n",celcius,fahr);
        celcius = celcius + step;

    }
}