// to calculate area of all geometric shapes
#include <stdio.h>
void main()
{
    int r,b,h,B,l,s;
    printf("Radius of circle:");
    scanf("%d",&r);
    printf("Base of triangle:");
    scanf("%d",&b);
    printf("Height of triangle:");
    scanf("%d",&h);
    printf("Breadth of rectangle:");
    scanf("%d",&B);
    printf("length of rectangle:");
    scanf("%d",&l);
    printf("Side of Square:");
    scanf("%d",&s);
    float area1=3.14*r*r,area2=(b*h)/2,area3=l*B,area4=s*s;
    printf("Area of circle:%f\nArea of Triangle:=%f\nArea of Rectangle:=%f\nArea of Square:%f",area1,area2,area3,area4);
}