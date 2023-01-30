#include<stdio.h>
#include<math.h>


void main()
{
    int side1, side2, side3;
    printf("Enter length of first side : ");
    scanf("%d", &side1);
    printf("Enter length of second side : ");
    scanf("%d", &side2);
    printf("Enter length of third side : ");
    scanf("%d", &side3);

    int s = (side1+side2+side3)/2;

    float area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    printf("\nArea of triangle : %.2f sqaure units.", area);
}