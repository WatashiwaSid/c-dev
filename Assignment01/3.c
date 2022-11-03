/*
Assignment problem 3.
Objective : Find and print all the numbers between 1 and 100 
that are divisble by 7.
Siddhant Nautiyal
*/

#include<stdio.h>

void main()
{
    int range;
    int count = 0;

    for(range=1;range<=100; range++)
    {
        if(range%7==0)
        {
            printf("%d\n", range);
            count++;
        }
    }
    printf("Total divisible numbers : %d", count);
}