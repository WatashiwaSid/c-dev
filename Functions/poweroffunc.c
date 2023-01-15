/* Objective : Write a fucntion that will take 2 arguments. The second argument will be the power of first.
Example - function(2,3) should return 2 to the power 3.

*/

#include<stdio.h>

int powerof(int, int); //prototype, define later

void main()
{

printf("%d", powerof(2,5));

}

int powerof(int mantissa, int power)
{
    int count;
    int base = mantissa;
    for(count=1; count<power; count++)
    {
        mantissa = mantissa*base;
    }
    return mantissa;
}

