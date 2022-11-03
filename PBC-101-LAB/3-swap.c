//Objective: Swap the value of 2 variables, with and without a third variable.
// Author: Siddhant N.

#include<stdio.h>
void main()
{
    //Swapping with a third variable.

    int a,b,temp;
    a=6,b=12; //consider some value to swap
    printf("Before swapping\na : %d\nb : %d", a,b);
    temp = a;
    a = b;
    b = temp;
    printf("\n\nAfter swapping\na : %d\nb : %d", a, b);
    
    //Swapping without a third variable.

    int c,d;
    c = 4,d=20; //consider some value to swap
    printf("\n\nBefore swapping\nc : %d \nd : %d", c,d);
    c = c+d;
    d = c-d;
    c = c-d;
    printf("\n\nAfter swapping \nc : %d \nd : %d", c,d);
}