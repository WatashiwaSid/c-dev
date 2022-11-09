//Objective: To find whether a given number is even or odd.
//Method: Conditional operator (Ternary operator).
//Author: Siddhant Nautiyal.

#include<stdio.h>
void main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    (number%2==0) ? printf("%d is an even number", number) :printf("%d is an odd number", number); 

    // (testExpression) ? True : False;
}