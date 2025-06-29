// to calculate perimeter 
#include<stdio.h>
void main()
{
    int l,b;
    printf("Length of Rectangle:");
    scanf("%d",&l);
    printf("Breadth of Rectangle:");
    scanf("%d",&b);
    int area1=l*b,peri=2*(l+b);
    printf("Area of Rectangle = %d\nPerimeter of Rectangle = %d",area1,peri);
    int r;
    printf("\nRadius of circle:");
    scanf("%d",&r);
    float area2=3.14*r*r,cir=2*3.14*r;
    printf("Area of Circle = %f\nCircumference of Circle = %f",area2,cir);
}