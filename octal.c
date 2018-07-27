/*
 * Author: ibrahim bougaoua
 * Purpose: Convert from base decimal to octal base.
 * Language:  C
 */
#include<stdio.h>
#include<stdlib.h>
#define base 8 // This constant is called base exmple (base 10).

int main()
{
    /*
     * vars
     * int p  => One degree displacement.
     * int s  => Gathering the survivors.
     * int rx => Reduced primary value.
     * int y  => In order to take the rest.
     * int x  => The value to be converted.
     */
    int p = 1,s = 0,rx,x,y;

    printf("Enter the number: \n");
    scanf("%d",&rx);
    x = rx;
    
    // If the score is 0, stop the process
    while( x != 0 )
    {
    	y  = x%base; // x mod base.
    	x  = x/base; // x div base.
    	s += p*y;    // s = s + ...... +p*10*10*.....*y.
    	p *= 10;     // p = p*10*10*....*10.
    }
    
    printf("(%d)10 = (%d)8\n",rx,s);

    return 0;
}
