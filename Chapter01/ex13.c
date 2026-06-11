#include <stdio.h>
#define IN 1
#define OUT 0
#define MAX_LENGTH 10
int main ()
{
    int c,state,c_count,overflow,i,j;
    int word_length[MAX_LENGTH];

    c_count=overflow=0;
    state = OUT;
    for (i=0 ;i<MAX_LENGTH;++i)
    {
        word_length[i]= 0;
    }
    
    
    
    while ((c=getchar())!= EOF)
    {

        if (state == IN && (c == ' '||c=='\n'||c=='\t'))
        {
            if (c_count>= MAX_LENGTH)
            {
                ++overflow;
                state=OUT;
            }
            else
            {
                ++word_length[c_count-1];
                state =OUT;
            }

        }
        else if (c == ' '||c=='\n'||c=='\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            c_count = 0;
            ++c_count;
            state = IN;
            
        }
        else if ((state == IN)&& !(c == ' '||c=='\n'||c=='\t'))
        {
            ++c_count;
        }
    }
    if (state == IN)
    {
        if (c_count>= MAX_LENGTH)
        {
            ++overflow; 
        }
        else
        {
            ++word_length[c_count -1];
        }
        
    }

    printf("Number of words with the lengths:\n");
    for(i=0;i<MAX_LENGTH;++i)
    {
        printf("%d:",i+1);
        for(j=0;j<word_length[i];++j)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("%d+:",MAX_LENGTH);
    for(i = 0;i<overflow;++i)
    {
        printf("*");
    }
    printf("\n");


    

    return 0;
}