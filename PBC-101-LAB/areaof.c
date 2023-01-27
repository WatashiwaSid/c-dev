#include<stdio.h>
#define PI 3.14

int circle(int r)
{
    int area;
    area = PI*r*r;
    return area;
}

int rectangle(int l, int b)
{
    int area;
    area = l*b;
    return area;
}

int triangle(int b, int h)
{
    int area;
    area = (b*h)/2;
    return area;
} 

void main()
{
    char choice;
    int radius, length, breadth, height, base;
    printf("What do you want to calculate area of? ");
    printf("\nPress c for circle, t for triangle or r for rectangle : ");
    scanf("%c", &choice);
    
    
    switch (choice)
    {

    case 'c': 
        printf("Enter radius : ");
        scanf("%d", &radius);
        printf("%d", circle(radius)); break;
    

    case 'r':
        printf("Enter length and breadth : ");
        scanf("%d%d", &length, &breadth);
        printf("%d", rectangle(length, breadth)); break;
    
    case 't':
        printf("Enter base and height : ");
        scanf("%d%d", &base, &height);
        printf("%d", triangle(base, height)); break;
    

    default:
        printf("Wrong choice."); break;
    }
    



}