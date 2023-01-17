// Create a recursive function to find the factorial of a number. 

#include<stdio.h>

int factorial(int num)
{
    if(num==0)
        return 1;
    while(num>0)
        return (num*factorial(num-1));    

}

void main()
{
    printf("Enter a number to get factorial : ");
    int num;
    scanf("%i", &num);
    printf("%i", factorial(num));

}

