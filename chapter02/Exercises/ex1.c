#include <stdio.h>
#include <limits.h>
#include <float.h>

int main ()
{
    printf("The ranges of a char:\nMin:%d   Max:%d\n",CHAR_MIN,CHAR_MAX);
    printf("The ranges of an unsigned char:\nMin:%d   Max:%d\n",0,UCHAR_MAX);
    printf("The ranges of a signed short int:\nMin:%d   Max:%d\n",SHRT_MIN,SHRT_MAX);
    printf("The ranges of an unsigned short int:\nMin:%d   Max:%d\n",0,USHRT_MAX);
    printf("The ranges of a signed int :\nMin:%d   Max:%d\n",INT_MIN,INT_MAX);
    printf("The ranges of an unsigned int:\nMin:%d   Max:%d\n",0,UINT_MAX);
    printf("The ranges of a signed long int:\nMin:%d   Max:%d\n",LONG_MIN,LONG_MAX);
    printf("The ranges of an unsigned long int:\nMin:%d   Max:%d\n",0,ULONG_MAX);
    printf("__________________________________________________________");
    printf("Float types\n");
    printf("");

}