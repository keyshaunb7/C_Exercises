#include <stdio.h>
#define MAXLINE 17

int getline(char line[],int maxline);
void copy(char to[],char from[]);

int main()
{
    int len;
    int max ;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = getline(line,MAXLINE))>0)
    {
        if (len>max)
        {
            max = len;
            copy(longest,line);
        }
    }
    if (max>0)
    {
        if (max<=MAXLINE-1)
        {
        printf("%s\n",longest);
        printf("The longest line is:\n%s\nwhich is %d characters long", longest,max);
        }

        else
        {

            printf("The longest line is over the character limit of %d.\nIt is %d characters long",MAXLINE-1 ,max);
        }
    }
    return 0;
    
}

int getline(char s[],int lim)
{
    int c,i,length;
    i=length = 0;
    /*for(i=0;i<lim-1 && (c=getchar()!= EOF) && c!= '\n';++i)
    {
        s[i]= c;
    }*/
    while(((c= getchar())!= EOF) && c!= '\n')
    {
        if(i<lim-1)
        {
            s[i++] = c;
            ++length;
        }
        else
        {
            ++length;
        }
    }
    if (c == '\n')
    {
        s[i++] = c;
        
    }
    ++length;
    s[i] = '\0';
    return length;
}

void copy(char to[],char from [])
{
    int i;
    i = 0;

    while((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}
 
    