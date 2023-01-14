#include<stdio.h>
#include<string.h>

//Function 1 : With arguments, with return value.
// Return value is the sum of 2 integers passed as args.

int sum(int num1, int num2)
{
    return(num1+num2);
}

//Function 2 : With arguments, without return value.
// Function prints the sqaure of a number passed as arguments. 

void sqaureof(int num)
{
    printf("Sqaure of %d is %d", num, num*num);
}

//Function 3 : Without arguments, Without return value.
// Function reads the first name of a person. Prints it in uppercase format.
void readfname()
{
    char fname[15];
    printf("What is your name? ");
    fgets(fname, 15, stdin);
    printf("Welcome %s", strupr(fname));
}

//Function 4 : Without arguements, with return value.
//Function returns the cube of a number.

int cubeof()
{
    int cube;
    printf("Enter a number : ");
    scanf("%d", &cube);
    return (cube*cube*cube);
}


void main()
{
    printf("%d\n", sum(8,8));
    sqaureof(5);
    printf("\n");
    readfname();
    printf("\n");
    printf("%d", cubeof());
}