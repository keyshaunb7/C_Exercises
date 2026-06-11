#include <stdio.h>
#define LIMIT 1000
int getline(char[],int);
int main()
{
    char s[LIMIT];

    printf("Here is the line:\n%sIt is %d characters long",s,getline(s));
}

int getline(char s[],int limit )
{
    int i,c,length;
    length =0;
    for(i=0;i<limit-1 && (c=getchar())!= EOF && c != '\n';++i)
    {
        s[i] = c;
        ++length;
    }
    if(c == '\n')
    {
        s[i++] = c;
    }
    s[i] = '\0';
    return length;
}
