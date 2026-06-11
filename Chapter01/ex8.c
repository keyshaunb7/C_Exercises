#include <stdio.h>
int main()
{
    int c;
    int blank_count, tab_count , newline_count;

    blank_count =tab_count =newline_count = 0 ;

    c = getchar();
    while (c != EOF)
    {
        if (c== ' ')
        {
            ++blank_count;
        }

        if (c== '\t')
        {
            ++tab_count;
        }

        if (c== '\n')
        {
            ++newline_count;
        }
        printf("Blank count:%d\tTab count:%d\tNew line count:%d\n",blank_count,tab_count,newline_count);
        c= getchar();

    }
    
}