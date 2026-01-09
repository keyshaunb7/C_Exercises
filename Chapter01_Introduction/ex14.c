#include <stdio.h>
int main ()
{
    int c,i,j;
    char char_arr[4]= {'a','b','c','d'};
    int char_count[4];

    for(i=0;i<4;++i)
    {
        char_count[i]= 0;
    }

    while ((c=getchar())!=EOF)
    {
        for(i=0;i<4;++i)
        {
            if (c ==char_arr[i])
            {
                ++char_count[i];
            }
        }

    }

    
    for(i=0;i<4;++i)
    {
        printf("%c:",char_arr[i]);
        for(j=0;j<char_count[i];++j)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    /*printf("a:%d b:%d c:%d d:%d",char_count[0],char_count[1],char_count[2],char_count[3]);*/
   return 0;
    
}