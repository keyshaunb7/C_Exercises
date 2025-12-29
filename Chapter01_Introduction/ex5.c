#include <stdio.h>
int main()
{
    #define LOWER 0
    #define UPPER 300
    #define STEP 20

    float fahr;
    printf("Fahrenheit\t Celcius\n");
    for (fahr = UPPER; fahr >= LOWER ; fahr = fahr - STEP)
    {
        printf("%3.0f\t %6.1f\n",fahr,(5.0*(fahr-32))/9);
    }
}