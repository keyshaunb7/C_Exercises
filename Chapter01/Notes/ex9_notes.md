#include <stdio.h>
int main()
{
    int c;
    int blank_count;

    blank_count = 0 ;
    c = getchar();
    while (c != EOF)
    {
        if (c== ' ')
        {
            ++blank_count;
        
        }
        if (c!= ' ')
        {
            blank_count= 0;
        }
        
        if(blank_count<=1)
        {
            putchar(c);
        }
        c = getchar();
    }
}    

above was my original solution, however I discovered I call getchar() and assign the value to c at the start of each while loop 
and I can use an else statements to make the code cleaner

I also changed it because I only need to check if the blank counter value (which I renamed to prev_space) is 0 or 1 so rather than treating it as I counter I will only check its value and set its value to either 0 or 1

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

this was my final refactor 