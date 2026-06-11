#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0
int calculator(char[]);
int main ()
{

    char sampleString [] ="20 + 20";
    printf("%s = %d",sampleString , calculator(sampleString));



    return 0;
}


int calculator(char equationString [] )
{
    int i ,num, result;
    int numState= IN;
    i ,result = 0;

    while (equationString[i] != '\0' ){
        printf("Result at start of loop: %d\n", result);
        if (isdigit(equationString[i]) && numState == IN)
        {
            numState = IN;
            num = 10 * num + (equationString[i]- '0'); 
            printf("%d\n",equationString[i]- '0') ;
        }

        else if (equationString[i] == '+')
        {
            numState = OUT;
            num = 0;
            
        }
        i++;
        
        result+= num;
        printf("Num  == %d \n" , num); 
        printf("Result = %d\n",result);
        
    }
    
    return result;
}




/*Unexpected results will return to this problem later*/