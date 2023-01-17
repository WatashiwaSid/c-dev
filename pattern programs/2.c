/*
j is now constrained upon i.
j is printing i number of times in these patterns.
Pattern 1 
1                             
1 2
1 2 3
1 2 3 4
1 2 3 4 5

Pattern 2 
1
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5

Pattern 3
*
* *
* * *
* * * *
* * * * *

Pattern 4 
A
A B
A B C
A B C D
A B C D E

Pattern 5
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

*/

/*
Step 1 - Oberserve the pattern. Identify any constant behaviour.  
Step 2 - Count lines. Outer loop will control change of line. 
Step 3 - Count number of values that will be printed at each line.
Step 4 - Inner loop will control the value that will be printed at each line.
Step 5 - Print a basic pattern, make adjustements.
*/

#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1;i<=5;i++)
    {
        char alphabet='A';
        for(j=1;j<=i;j++)
        {
            printf("%c ", alphabet);
            alphabet++;
        }
        printf("\n");
    }
    printf("\n\n");

    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

}