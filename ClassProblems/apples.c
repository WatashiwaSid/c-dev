// exercise programme

/*
Objective : Suppose a fruit seller is selling apples on the basis of cost: rs 100/2kg & rs 100/kg.
Write a program to ask the user the qauntity of apples to buy and find the total cost.
*/

#include <stdio.h>

void main()
{
    int quantity;
    int q, r, cost; // q: quotient, r:remained.
    printf("How many kg apples do you want to buy? : ");
    scanf(" %d", &quantity);
    q = quantity/2;
    r = quantity%2;
    cost = q*150 + r*100;
    printf("Total cost : %d", cost);

}