// Write function to return the factorial of a number.

#include<stdio.h>

int factorialof(int num)
{
    int factorial=1;
    for(int count=1;count<num;count++)
    {
        factorial+=factorial*count;
    }
    return factorial;
}

void main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    printf("factorial of %d is %d", num, factorialof(num));

}