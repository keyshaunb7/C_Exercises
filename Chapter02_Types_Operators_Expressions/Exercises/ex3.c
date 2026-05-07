#include <stdio.h>
#include <ctype.h>
//int getLength(char s[]);
int htoi(char s[]);
int main()
{
    int i,j ;
    char sampleStrings [][100] = {
        "0xf",
        "a12",
        "bb",
        "cc"
    };
    for(i = 0; i < 4; i++)
    { 
    printf("This is the hexadecimal: %s \n", sampleStrings[i]);
    printf("This is the integer value: %d\n", htoi(sampleStrings[i]));
    }
    return 0;
}



int htoi(char s[])
{
    int i, total;
    total =i = 0 ;
    if (s[0]== '0' && s[1] == 'x' || s[1] == 'X')
    {
        i = 2;
    }
    else
    {
        i=0;
    }
    for (i ; s[i] != '\0'; i++)
    {
        if (isdigit(s[i]))
        {
            printf("digit\n");
            total = 16 * total + (s[i] - '0');
        }
        else if (isupper(s[i]))
        {
            printf("upper\n");
            total = 16 * total + (10+(s[i] - 'A'));
        }
        else if (islower(s[i]))
        {
            printf("lower\n");
            total = 16 * total + (10+(s[i] - 'a'));
        }

        else
        {
            return -1;
        }
        
    }
    return total;
}

/*
inwt getLength(char s[])
{
    int i;
    i=0;
    while(s[i] != '\0')
    {
        printf("%c\n",s[i]);
        i++;
        
    } 
    return i;
}
*/