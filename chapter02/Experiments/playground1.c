#include <limits.h>
#include <ctype.h>
#include <stdio.h>

#define TYPE(x) _Generic((x), \
    char: "char", \
    signed char: "signed char", \
    unsigned char: "unsigned char", \
    short: "short", \
    unsigned short: "unsigned short", \
    int: "int", \
    unsigned int: "unsigned int", \
    long: "long", \
    unsigned long: "unsigned long", \
    long long: "long long", \
    unsigned long long: "unsigned long long", \
    float: "float", \
    double: "double", \
    long double: "long double", \
    default: "unknown")



int main()
{

    int i ;
    float j;
    int k;
    long double l ;

    j=  5.4;
    k=2 ;
    l =30000.556L ;
    printf("%s\n",TYPE(j));

    j = l ;





    printf("%s\n",TYPE(k+l));
    printf("%d\n",k);
    printf("%s\n",sizeof(j));
    printf("%s\n",sizeof(l));
    return 0;
}