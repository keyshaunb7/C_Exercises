#include <stdio.h>
int main()
{
    float fahr, celcius;
    float upper,lower ,step;

    lower = 0;
    upper = 100.0;
    step = 20.0;

    fahr = lower;
    printf("Fahrenheit\tCelcius\n");
    while (fahr<=upper)
    {
        celcius = (5.0/9.0) * (fahr-32.0);
        printf("%5.0f\t %13.1f\n",fahr,celcius);
        fahr = fahr + step;

    }
}