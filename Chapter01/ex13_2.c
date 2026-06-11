#include <stdio.h>
#define IN 1
#define OUT 0
#define MAX_LENGTH 10
int main ()
{
    int c,state,c_count,overflow,i,j,max;
    int wl_frequency[MAX_LENGTH];

    c_count=overflow=max=0;
    state = OUT;
    for (i=0 ;i<MAX_LENGTH;++i)
    {
        wl_frequency[i]= 0;
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
                ++wl_frequency[c_count-1];
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
            ++wl_frequency[c_count -1];
        }
        
    }

    for(i=0;i<MAX_LENGTH;++i)
    {
        if(wl_frequency[i]>max)
        {
            max = wl_frequency[i];
        }
    }

    printf("Number of words with the lengths:\n");

    for(i=0;i<MAX_LENGTH;++i)
    {
        printf("%d:\t",i+1);
        
    }
    printf("%d+:\n",MAX_LENGTH);
    
    for(i=0;i<max;++i)
    {
        for(j=0;j<MAX_LENGTH;++j)
        {
            if (wl_frequency[j]>=i+1)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        if(overflow>=i+1)
        {
            printf("*\n");
        }
        else
        {
            printf(" \n");
        }
    }

    return 0;
}


/*Histogram complete and working however try to make it so that bars grow upwasrds rather than downwards*/