//Objective: Find the sum of n numbers taken as input in a given range.
//Author: Siddhant N.

#include<stdio.h>
void main()
{
    int range,sum=0,number;
    for(range=1;range<=10;range++)
    {
        printf("Enter number %d : ", range);
        scanf("%d", &number);
        sum+=number;
    }
    printf("%d", sum);
}
