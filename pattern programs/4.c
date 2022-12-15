/*
Now we will se some 3 loop patterns.

Patter 1
        * 
      * *
    * * *
  * * * *
* * * * *

Pattern 2

        A 
      A B 
    A B C
  A B C D
A B C D E  

Pattern 3

        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5   

Pattern 4

* * * * *
  * * * *
    * * *
      * *
        *

Information:-
1. Now we want to print the pattern at right side instead of extreme left, 2 patterns have emerged.
2. On the left side of the diagonal, we have a pattern of whitespaces.
3. On the right side of the diagonal, we have the real pattern that we want to print.
4. The logic is to nest 3 loops, the usual outer loop to control line breaks.
5. First inner loop to print the whitespace pattern, and the second inner loop to print the real pattern.

*/

#include<stdio.h>
void main()
{
    int i,j,k;  
    char letter;
    /*
    1. i loop will control line breaks.
    2. j loop will print whitespaces.
    3. k loop will print the real pattern.
    */

   for(i=1;i<=5;i++)
   {
       for(j=4;j>=i;j--) // j is inversely related to i
       {
           printf("  ");
          
       }
        for(k=1;k<=i;k++) //k is directly related to i
        {
            printf("* ");
        }
       printf("\n");
   }

   printf("\n\n");

    for(i=1;i<=5;i++)
    {
        letter='A';
        for(j=4;j>=i;j--)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1;i<=5;i++)
    {
        for(j=4;j>=i;j--)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=5;i>=1;i--)
    {
        for(j=4;j>=i;j--)
        {
            printf("  ");
        }
        for(k=i;k>=1;k--)
        {
            printf("* ");
        }
        printf("\n");
    }

}