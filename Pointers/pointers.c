// Introductions to Pointers 

#include<stdio.h>
void main()
{
    int god = 9; //god is a random variable
    int *ptrgod = &god;     //ptrgod is a pointer to address of variable god


    printf("The value of variable god is : %d", god);      //9
    printf("\nThe memory address of variable god is : %d (%x)", &god, &god);  //x

    printf("\n\nThe memory address of variable god through ptrgod : %d (%x)", ptrgod, ptrgod);  //x

    printf("\n\nThe dereference value at pointer to variable god is : %d", *ptrgod);   //9
    printf("\nThe memory address of pointer to variable god is : %d (%x)", &ptrgod, &ptrgod);     //y (This the address of pointer, and not the variable that it pints to)



}