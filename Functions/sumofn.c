/*
Objective : Recursive function to return the sum of first n postive integers.
Author : Siddhant Nautiyal
*/

#include<stdio.h>

int sumofn(int);

void main()
{
    int num;
    printf("Enter limit of range to add : ");
    scanf("%d", &num);
    printf("Sum of range : %d", sumofn(num));
}

int sumofn(int n)
{
    while(n != 0)
    {
        return n+sumofn(n-1);
    }
}