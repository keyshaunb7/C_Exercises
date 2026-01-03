#include <stdio.h>
#define MAXLINE 1000
#define MIN_LENGTH 10
int getline(char s[],int limit);

int main()
{
    int len;
    char line[MAXLINE] = {'\0'};
    while((len = (getline(line,MAXLINE))-1)>0)
    {
        if (len>MIN_LENGTH)
        {
            printf("This line is longer than %d characters:\n%s",MIN_LENGTH,line);
        }
        if(line[len-1]== EOF)
        {
            return 0;
        }
    }
    return 0;
}

int getline(char s[],int limit )
{
    int i,c,length;
    length =0;
    for(i=0;i<limit-1&& (c=getchar())!= EOF && c != '\n';++i)
    {
        s[i] = c;
        ++length;
    }
    if(c == '\n')
    {
        s[i++] = c;
        ++length;
    }
    s[i] = '\0';
    return length;
}