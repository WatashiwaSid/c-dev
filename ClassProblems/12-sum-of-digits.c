// Objective: To find the sum of each digit in a given number.
// Author: Siddhant Nautiyal

#include<stdio.h>
void main()
{
    int num,remainder,sum=0;
    printf("Enter any number : ");
    scanf("%d", &num);
    while(num>0)
    {
        remainder= num%10;
        num/=10;
        sum+=remainder;
    }
    printf("\nSum of each digit : %d", sum);
}