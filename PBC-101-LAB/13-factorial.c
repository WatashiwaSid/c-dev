// Objective : To find the factorial of a given number.
// Author : Siddhant Nautiyal

#include<stdio.h>
void main()
{
    
    int num,count;
    long long int factorial=1; //Please do not use long integers unless required.
    printf("Enter any number : ");
    scanf("%d", &num);
    if(num!=0)
    {
    for(count=1;count<=num;count++)
    {
        factorial=factorial*count;
    }
    printf("Factorial of %d is %llu", num, factorial);
    }
    else
        printf("Factorial of 0 is 1");

}