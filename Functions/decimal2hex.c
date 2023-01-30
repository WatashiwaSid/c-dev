#include<stdio.h>

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
    int num;
    printf("Enter any decimal number : ");
    scanf("%d", &num);
    hex(num);

}
