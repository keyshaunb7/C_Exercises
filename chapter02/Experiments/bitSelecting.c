#include <stdio.h>
unsigned getbits(unsigned x, int p, int n);
int main()
{
    unsigned x; int p; int n;
    x=10;p=4;n=3; //expected result: 2 result : 2
    unsigned result;

    result = getbits(x,p,n);
    

    printf("This is the result : %u\n", result);
}



/* getbits: get n bits from position p */
 unsigned getbits(unsigned x, int p, int n)
 {
 return (x >> (p+1-n)) & ~(~0 << n);
 } 


 /*
 This is from section 2.9 in K&R, I am able to accurately
 predict the result  of the program but at the moment I am unsure 
 what the purpose of the program is and how it fulfils it.

 From my current understanding :
&~(~0 << n); creates a mask of the rightmost n number of bits 
which the book refers to as "right adjusting".

I now understand that the goal is to select a specific selection
of an n number of bits starting from position p

For example an input of getbits(10,4,3)
returns 2 because:
10  represented in binary is :

x:0001010
    ^^^

so it selects these three binary digits 010 by shifting
to the right by 2 so x becomes 00000010

and uses a right adjusts it using a mask of 00000111 to make sure
that the bits are aligned correctly , in this case the right adjust
was not necessary because the bits were already in the right position

00000010
represented as a decimal value is 2
therefore the function returns 2

 */