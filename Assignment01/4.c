/*
Assignment problem 4.
Objective: Take 20 numbers as iunput. Count how many are divisble by 5 and 7 both.
Note : For the sake of simplicity, input is retricted to 5 numbers.
Siddhant Nautiyal.
*/

#include<stdio.h>

void main()
{
    int range,num;
    int count=0;
    for(range=1;range<=5;range++)
    {
        printf("Enter number %d : ", range);
        scanf("%d", &num);
        if(num%5==0 && num%7==0)
        {
            count++;
        }
    
    }
    printf("Total divisble numbers : %d", count);
}