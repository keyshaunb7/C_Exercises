#include <stdio.h>
unsigned getbits(unsigned x, int p, int n);
int main()
{
    unsigned x; int p; int n;
    x=10;p=4;n=3; //expected result: 2 result : 2
    unsigned result;

    result = getbits(x,p,n);
    

    printf("This is the result : %b\n", result);
}



/* getbits: get n bits from position p */
 unsigned getbits(unsigned x, int p, int n)
 {
 return (x >> (p+1-n)) & ~(~0 << n);
 } 