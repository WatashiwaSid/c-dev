/*
Objective : Write a recursive and iterative function to print fibonacci series.
Please note that this problem is an example where iteration is better than recursion.
Author : Siddhant Nautiyal.
*/

#include<stdio.h>

int fibrecursion(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibrecursion(n-1) + fibrecursion(n-2);
}

void fibiteration(int n)
{
    int a=0,b=1,sum;
    for(int count=1;count<=n;count++)
    {
        printf("%d ",a);
        sum = a+b;
        a=b;
        b=sum;
    }
}

void main()
{
    int num;
    printf("Enter number of terms in the series : ");
    scanf("%d", &num);
    printf("Iterative Series : "); fibiteration(num);

    //input some big number and observe the time difference
    printf("\n\nRecursive Series : ");
    for(int count=0; count<num; count++)
    {
        printf("%d ", fibrecursion(count));
    }
   

   
    
}
