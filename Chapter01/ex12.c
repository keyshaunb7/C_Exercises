#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{

    int c,state;
    state = OUT;

    while((c=getchar())!= EOF)
    {   

        if (!(c== ' '||c=='\t'||c=='\n') )
        {
            state = IN;
            putchar(c);
        }
        else if ((c== ' '||c=='\t'||c=='\n') && (state == IN))
        {
            state = OUT;
            putchar('\n');
        }

    }
    return 0;
}


/*There is a cleaner way to do this */