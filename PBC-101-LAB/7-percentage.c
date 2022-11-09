//Objective: Input the percentage of a user and return their percentage.
//Note: See question for reference of division score.
//Author: Siddhant Nautiyal.

#include<stdio.h>
void main()
{
    float percentage;
    printf("Please enter your percentage : ");
    scanf("%f", &percentage);
    if(percentage>80)
        printf("\nYou got grade A.");
    else if(percentage<=80 && percentage>=61)
        printf("\nYou got grade B.");
    else if(percentage<61 && percentage>=51)
        printf("\nYou got grade C.");
    else if(percentage<51 && percentage>=41)
        printf("\nYou got grade D.");
    else if(percentage<41 && percentage>=35)
        printf("\nYou got grade E.");
    else
        printf("\nYou got grade F.");
}