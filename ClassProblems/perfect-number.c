// Objective : To find whether a given number is perfect number or not.
// Author : Siddhant Nautiyal

#include<stdio.h>
void main()
{
    int num,count,sum=0;
    printf("Enter any number : ");
    scanf("%d", &num);
    for(count=1;count<num;count++)
    {
        if(num%count==0)
        {
            sum=sum+count;
        }
        else
            continue;
    }
    if(sum==num)
        printf("%d is a perfect number", num);
    else
        printf("%d is not a perfect number", num);    
}