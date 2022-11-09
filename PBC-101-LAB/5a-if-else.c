//Objective: To find whether a given number is even or odd.
//Method: If-Else
//Author: Siddhant Nautiyal.

#include<stdio.h>
void main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    if(number==0)
        printf("\n%d is niether even nor odd.", number); //This part of code is not necessary. 
    else if(number!=0 && number%2==0)
        printf("\n%d is an even number.", number);
    else
        printf("\n%d is an odd number.", number);
}