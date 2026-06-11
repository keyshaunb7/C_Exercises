#include <stdio.h>
#define MAX_INPUT 1000
#define IN 1
#define OUT 0
void removeTrail(char[]);
int main()
{
    char line[MAX_INPUT] ;
    while((removeTrail(line)),line[0]!= '\n')
    {   
        printf("First value in the string is: %c \n",line[0]);
        if (line[0] != '\0')
        {
            printf("printed:\n%s",line);
        }

        else
        {
            printf("line is empty");
        }
        
    }
}

void removeTrail(char s[MAX_INPUT])
{
    int c,i,state;
    state = OUT;
    i=0;
    while(((c=getchar())!= EOF) && (c!= '\n'))
    {
        if ((c== ' ')||(c=='\t'))
        {
            if (state == IN)
            {
                s[i++] = c;
            }
            state = OUT;

        }
        else
        {
            state = IN;
        }
        if (state == IN)
        {
            s[i++]=c;
        }    
    }
    if (c== '\n')
    {
        s[i++] = c;
    }
    s[i++] = '\0';
}

/*Another way to solve this would be to have a getline function and a trim function seperately, the getline function would take the users input ,
the program would pass this into the trim function to produce a trimmed version of the users input*/