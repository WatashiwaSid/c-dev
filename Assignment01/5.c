/*
Assignment problem 5.
Objective: Calculate total deposit in a bank account for a RD of 2 years.
Siddhant Nautiyal.
*/

#include<stdio.h>

void main()
{
    int deposit;
    int months=24; //for 2 years
    int total_amount;
    printf("Enter amount of monthly deposit : ");
    scanf("%d", &deposit);
    total_amount = deposit*24;
    printf("Total deposit at end of 2 years : %d", total_amount);
}