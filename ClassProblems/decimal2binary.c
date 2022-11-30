// Objective: To find the binary equivalent of a given decimal number.
// Author: Siddhant Nautiyal

#include<stdio.h>
void main()
{
    int num,remainder,binary=0,multiplier=1;
    printf("Enter any base 10 number : ");
    scanf("%d", &num);
    while (num>0)
    {
        remainder=num%2;
        binary = binary+(remainder*multiplier);
        multiplier*=10; // we are concatinating remainder using the multiplier variable
        num/=2;
        
    }
    printf("\nBase 2 equivalent : %d", binary);
    
}