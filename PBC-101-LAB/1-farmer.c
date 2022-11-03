// Objective: Find the total length of rope required to build boundary for a rectangular field. Fencing is to be done 3 times. 
// Author: Siddhant N.

#include<stdio.h>

void main()
{
    int length=20,breadth=15, perimetre, cost; //l and b are known
    perimetre = 3*2*(length+breadth); //3 times of perimetre
    cost = 400*perimetre;
    printf("Total length of rope required : %d metres", perimetre);
    printf("\nTotal cost of fencing : %d rupees", cost);
}