#include <stdio.h>
int limit = 10;
int main()
{
    int i,c;
    for (i = 0; i<limit;++i)
    {
        c = getchar();
        if (c== '\n')
        {
            break;
        }
        if (c== EOF)
        {
            break;
        }
        printf("%c",c);

    }


}