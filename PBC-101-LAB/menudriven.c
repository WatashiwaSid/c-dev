#include<stdio.h>

void factors(int num)
{
    for(int count=1; count<=num; count++)
    {
        if(num%count==0)
            printf("%d\t", count);
        else 
            continue;
    }

}

int factorial(int num)
{
    int factorial = 1;
    for(int count=1; count<=num; count++)
    {
        factorial = count*factorial;
    }
    return factorial;
}

int reverse(int num)
{
    int reverse=0, remainder;
    while(num>0)
    {
        remainder = num%10;
        reverse = (reverse*10) + remainder;
        num/=10;
    }
    return reverse;
    

}


void main()
{

    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    // printf("%d", factorial(num));
    // printf("%d", reverse(num));
    factors(9);




}