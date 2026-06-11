#include <stdio.h>
#define  NO_OF_BITS sizeof(unsigned)*__CHAR_BIT__
unsigned setbits (unsigned x, int p , int n , unsigned y);
int main ()
{
    int result;

    result = setbits(27,6,4,54);
    printf ("This is the result : %u", result);
    return 0;
}

unsigned setbits (unsigned x, int p , int n , unsigned y)
{
    int z;
    unsigned mask ;
    z = (NO_OF_BITS) - (n+1);
    // printf("This is the number of bits %d\n",NO_OF_BITS);
    printf("This is y before: %u\n", y);
    //use mask to get rightmost n bits of y 
    mask = ~(~0<<n) ;
    printf("This is the mask before %u\n", mask);
    y = y & mask ;
    
    

    //create second mask
    mask  = (~0);
    
    mask >>= (NO_OF_BITS+1)-(p-1);
    mask <<= (p+1) -n;
    printf("This is the mask %u\n",mask);
    x = x & ~mask;
    printf("This is x %u\n",x);
    x= x| y;
    printf("This is y %d\n", y);

    //return the combination of the two masks
    return x ;

}
