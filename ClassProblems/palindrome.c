// Objective: To find whether a given number is palindromic or not.
// Palindromic Number is a number that remains the same when its digits are reversed.
// Author: Siddhant Nautiyal


#include<stdio.h>
void main()
{
    int num,remainder,palindrome,reverse=0;
    printf("Enter any number : ");
    scanf("%d", &num);
    palindrome=num;
    while(num>0)
    {
        remainder=num%10;
        num/=10; //The division operator always returns the greatest integer value of remainder.
        reverse = (reverse*10)+remainder; 
    }
    if(reverse==palindrome)
        printf("\nGiven number is a palindromic number.");
    else
        printf("\nGiven number is not a palindromic number.");

}