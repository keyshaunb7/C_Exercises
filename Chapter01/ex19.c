#include <stdio.h>
#define MAXLINE 1000
int getline(char[],int);
void reverse(char[],char[],int length );

int main()
{
    int length;
    char line [MAXLINE] = {'\0'};
    char reversed_line[MAXLINE] = {'\0'};
    length = 0;
    while((length = getline(line,MAXLINE))>0)
    {
        reverse(line,reversed_line,length);
        printf("This is the length: %d\n",length);
        printf("This is the line:\n%s\nThis is the reversed line:\n%s\n",line,reversed_line);
    }
}
int getline(char s[], int limit)
{
    int c, i,length ;
    length = 0;
    for (i=0;(i<limit && (c=getchar())!= EOF) && c!='\n';++i)
    {
        s[i]=c;
        ++length;
    }
    if (c=='\n')
    {
        s[i++] = c;
    }
    s[i] = '\0';
    return length;
    
}

void reverse(char old[],char new[],int length)
{
    int i,j;
    j=0;
    for(i=length;i>=0 ;--i)
    {
        if ((old[i]!='\n') && (old[i]!='\0'))
        {
            new[j++] = old[i];
        }
    }
    new[j++] = '\n';
    new[j] = '\0';
}


