#include <stdio.h>
int main()
{
    int c;
    int prev_space;

    prev_space = 0 ;
    while ((c=getchar())!= EOF)
    {
        if (c== ' ')
        {
            if (prev_space == 0)
            {
                prev_space = 1;
                putchar(c);
            }
        }
        else
        {
            prev_space = 0;
            putchar(c);
        }
        
        

        
    }
    return 0;
}
    


    /*            ++prev_space;
        
        }
        else
        {
            prev_space= 0;
        }
        
        if(prev_space<=1)
        {
            putchar(c);
        }*/