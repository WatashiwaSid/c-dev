//Objective: To find whether a given number is even or odd.
//Method: Switch Case
//Author: Siddhant N.

#include<stdio.h>
void main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    switch (number%2)
    {
    case 0:printf("%d is an even number.", number);break;
    case !0:printf("%d is an odd number.",number);break;
    }
}