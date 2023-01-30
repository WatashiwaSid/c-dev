/* Objective - Input a decimal number. Print hex, octal and decimal equivalent.
   Author - Siddhant Nautiyal.
*/

#include<stdio.h>

int binary(int num)
{
    int remainder, binary=0, multiplier=1;
    while(num>0)
    {
        remainder=num%2;
        binary = (remainder*multiplier) + binary;
        multiplier = multiplier*10;
        num = num/2;
    }
    return binary;
}

int octal(int num)
{
    int remainder, octal=0, multiplier=1;
    while(num>0)
    {
        remainder=num%8;
        octal = (remainder*multiplier) + octal;
        multiplier = multiplier*10;
        num = num/8;
    }
    return octal;
}

void hex(int num)
{
    char hexnum[100];
    int remainder, count=0;
    while(num>0)
    {
        remainder=num%16;
        if(remainder<10)
        {
            hexnum[count++] = remainder+48;
        }
        else
            hexnum[count++] = remainder+55;
        num=num/16;
    }

    for(int counter=count; counter>=0; counter--)
    {
        printf("%c", hexnum[counter]);
    }
}



void main()
{
    printf("Enter a deciam number : ");
    int num;
    scanf("%d", &num);
    printf("\nBinary equivalent : %d\n", binary(num));
    printf("Octal equivalent : %d\n", octal(num));
    printf("Hexadecimal equivalent : ");
    hex(num);
}

