// Objective: To reverse the digits of a given number and print the output.
// Author : Siddhant Nautiyal

#include<stdio.h>
void main()
{
    int num,remainder,reverse=0;
    printf("Enter any number : ");
    scanf("%d", &num);
    while(num>0)
    {
        remainder=num%10;
        num/=10; //The division operator always returns the greatest integer value of remainder.
        reverse = (reverse*10)+remainder; 
    }
    printf("\nReverse of digits : %d", reverse);

}