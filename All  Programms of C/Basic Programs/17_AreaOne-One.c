// to calculate area of all shapes one after one
#include <stdio.h>
void main()
{
    int r;
    printf("Radius of circle: ");
    scanf("%d",&r);
    float area1=3.14*r*r;
    printf("Area of Circle= %f",area1);
    int b,h;
    printf("\nBase of triangle: ");
    scanf("%d",&b);
    printf("Height of triangle: ");
    scanf("%d",&h);
    float area2=(b*h)/2;
    printf("Area of Triangle= %f",area2);
    int l,B;
    printf("\nLength of rectangle: ");
    scanf("%d",&l);
    printf("Breadth of rectangle: ");
    scanf("%d",&B);
    float area3=l*B;
    printf("Area of Rectangle= %f",area3);
    int s;
    printf("\nSide of square: ");
    scanf("%d",&s);
    float area4=s*s;
    printf("Area of Square= %f",area4);
}

