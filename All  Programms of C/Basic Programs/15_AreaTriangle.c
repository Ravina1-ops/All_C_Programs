// to calculate area of triangle
#include <stdio.h>
void main()
{
    int b,h;
    printf("Base:");
    scanf("%d",&b);
    printf("Height:");
    scanf("%d",&h);
    float area=b*h/2;
    printf("Area of triangle:%f",area);
}