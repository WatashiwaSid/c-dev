/*
Pattern 1
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

Pattern 2
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1

*/

#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}