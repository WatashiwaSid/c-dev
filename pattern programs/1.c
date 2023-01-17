 /*
 Pattern - 1

 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5

 Pattern - 2

 1 1 1 1 1
 2 2 2 2 2 
 3 3 3 3 3 
 4 4 4 4 4 
 5 5 5 5 5 

Pattern - 3

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

Pattern - 4

A B C D E 
A B C D E
A B C D E
A B C D E
A B C D E

Pattern - 5

5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

Pattern - 6

E D C B A
E D C B A
E D C B A
E D C B A
E D C B A

 */

/*
Step 1 - Count the lines. Outer loop will control lines. Line break will be part of outer loop.
Step 2 - Count the values to be printed at every line. Inner loop will control the print of values.
Step 3 - Start with a basic pattern, then make adjustments as per given pattern.
Step 4 - Observe rows and columns, is the row value constant or column value constant?
Step 5 - Is j related to i? 

*/

#include<stdio.h>
void main()
{
    int i, j;     // i : rows; j : columns
    

    for(i=1;i<=5;i++) //outer loop will control change of line
    {
        for(j=1;j<=5;j++) //inner loop will print the values
        {
            printf("%d ", j); 
        }
        printf("\n"); //line break is part of outer loop.
    }

    printf("\n\n");

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\n\n");


    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1;i<=5;i++)
    {
        char alphabet='A';
        for(j=1;j<=5;j++)
        {
            printf("%c ", alphabet);
            alphabet++;
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1;i<=5;i++)
    {
        for(j=5;j>=1;j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1;i<=5;i++)
    {
        char alphabet='E';
        for(j=1;j<=5;j++)
        {
            printf("%c ", alphabet);
            alphabet--;
        }
        printf("\n");
    }

}
