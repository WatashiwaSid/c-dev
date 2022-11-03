/*
Assignment problem 2.
Objective : Find whether a number entered by user is divisible by 11 or not.
Siddhant Nautiyal.
*/

#include<stdio.h>

void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num%11==0){
        printf("\n%d is divisible by 11", num);
    }
    else{
        printf("\n%d is not divisible by 11", num);
    }
}