#include <stdio.h>
#define LOWER 0
#define UPPER 100
#define STEP 20
float temp_converter(float fahr);
int main ()
{
    float i;
    printf("Fahrenheit\tCelcius\n");
    for(i=LOWER;i<=UPPER;i+=STEP)
    {
        printf("%5.0f\t%13.1f\n",i,temp_converter(i));
    }
    return 0;
}
float temp_converter(float fahr)
{
    return (5.0/9.0)*(fahr-32);
}