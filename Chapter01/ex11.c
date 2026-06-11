#include <stdio.h>
int main()
{
    #define OUT 0
    #define IN 1 

    int c;
    int state,nw,nc,nl;

    state = OUT;
    nw=nc=nl=0;

    while ((c=getchar())!= EOF)
    {
        ++nc;
        if (c== '\n')
        {
            ++nl;
        }
        if(c==' '||c=='\t'||c=='\n')
        {
            state = OUT;            
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }


    }
    printf("Word count:%d\n",nw);
    return 0;
    
}