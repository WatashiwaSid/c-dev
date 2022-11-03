// Objective: Convert temperature from fahrenheit to celsius.
//Author: Siddhant N.

#include<stdio.h>

void main()
{
    float fahrenheit, celsius;
    printf("Enter temperature in fahrenheit : ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit-32)*5/9;
    printf("\n%.2f in Fahrenheit is %.2f in Celsius scale.", fahrenheit, celsius);

}