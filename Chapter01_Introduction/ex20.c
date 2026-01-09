#include <stdio.h>
#define MAXLINE 1000
#define TAB_WIDTH 8
int getline(char [],int);
void detab(char[],char[],int);
int main()
{
    char line [MAXLINE] = {'\0'};
    char detabbed_line[MAXLINE] = {'\0'};
    /*getline(line,MAXLINE);
    detab(line,detabbed_line,TAB_WIDTH);
    printf("This is the line:\n%sThis is the detabbed line:\n%s",line,detabbed_line );*/
    while (getline(line,MAXLINE)>0)
    {
        detab(line,detabbed_line,TAB_WIDTH);
        printf("This is the line:\n%sThis is the detabbed line:\n%s",line,detabbed_line );
    }
}
int getline(char s[],int limit)
{
    int i,c ;
    for (i = 0; i<limit-1 && (c=getchar())!= EOF && c!='\n';i++)
    {
        s[i] = c;
    }
    if (c=='\n')
    {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}
void detab(char original[], char detabbed[],int tab_width)
{
    int i,j,spaces;
    i =j= spaces = 0;
    while(original[j]!='\0')
    {   
          
        if(original[j]=='\t')
        {
            spaces = tab_width - (i%tab_width);

            ++j;
            
            
            
            printf("This is the number of tab spaces: %d\n",spaces);
            while(spaces>0)
            {
                detabbed[i++] =  ' ';
                detabbed[i]= '\0';
                --spaces;
                printf("i:%d. j:%d. %s\n",i,j,detabbed);
            }

            
        }
        else
        {
            detabbed[i] = original [j]; 
            ++i;
            ++j;
            detabbed[i] = '\0';
        }

        printf("i:%d. j:%d. %s\n",i,j,detabbed);

    }
    detabbed[i]='\0';
}

