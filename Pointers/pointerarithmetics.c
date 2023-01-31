// Introduction to pointer arithmetics

#include<stdio.h>
void main()
{
    int a = 56;
    printf("Value of a with increment of 1 : %d", ++a); //57

    int b = 56;
    int *ptrb = &b;

    printf("\n\nAddress of pointer to b : %d (%x)", ptrb, ptrb);
    printf("\n\nDereference value at pointer to b : %d", *ptrb);

    printf("\n\nAddress of pointer to b with increment of 1 : %d", ++ptrb); //increment adds size of 1 integer, i.e. 4 bytes

    *ptrb++;
    printf("\n\nDereference value at pointer to b with increment of 1 : %d", *ptrb);

    //Internal Pointer Variable

    int myarray[] = {1,2,3,4,5};
    // myarray is an internal pointer variable since it holds the memory address of the value at 0th index of the array.
    printf("\n\nMemory address of the value at 0th index : %d", &myarray);
    printf("\n\nMemory address of the value at 0th index : %d", &myarray[0]); //same as above
    printf("\n\nMemory address of the value at 1th index : %d", &myarray[1]);
    
}