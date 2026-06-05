#include <stdio.h>
int any(char s1[], char s2[]);
int main()
{
    char sampleString1[] = "aaaaaaaaaa";
    char sampleString2[]= "bdsfgd";
    int result;
    result = any(sampleString1,sampleString2);
    if (result!= -1)
    {
        printf("This is the first occurrance of string 2 in string 1 : %d ", result);
    }
    else
    {
        printf("There are no occurences of string 2 in string 1 ");
    }
    
    return 0;
}

int any(char s1[],char s2[])
{
    int i,j;
    for (i=0;s1[i]!='\0';i++)
    {
        for (j=0; s2[j]!= '\0'; j++)
        {
            if (s1[i]== s2[j])
            {
                return i;
            }
        }
    }
    return -1;
}