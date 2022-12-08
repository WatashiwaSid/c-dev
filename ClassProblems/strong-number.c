// Objective - To Find whether a given number is strong number or not.
// Strong Number - The sum of the factorial of each digit must be equal to the factorial of whole number.
// Author - Siddhant Nautiyal

#include<stdio.h>
void main()
{
    int num,count,factorial,sum=0,remainder,verifier;
    printf("Enter any number : ");
    scanf("%d", &num);
    verifier=num;
    while (num>0)
    {
        remainder=num%10;
        factorial=1;
        for(count=1;count<=remainder;count++)
        {
            factorial*=count;
        }
        sum+=factorial;
        num/=10;
    }    

    if(sum==verifier)
        printf("%d is a strong number", verifier);
    else
        printf("%d is not a strong number", verifier);
}