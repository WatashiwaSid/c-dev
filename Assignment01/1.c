/*
Assignemnt problem 1.
Objective : Find the total legth of rope to build boundary for a cricket field.
Siddhant Nautiyal.
*/

#include<stdio.h>

void main()
{ 
    const float PI=3.14;    //PI is constant
    float radius, circumference;
    printf("Enter the radius of field : ");
    scanf("%f", &radius);
    circumference = 2 * PI * radius;
    printf("Total length of rope required is %.4f meters.", circumference); 
    //.4f will restrict floating value upto 4 decimal points.

}