/*TO input angles of a triangle and check it is valid or not*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a1,a2,a3;
    printf("Enter Angles Of Triangle:");
    scanf("%f %f %f",&a1,&a2,&a3);
    float sum=a1+a2+a3;
    if(a1,a2,a3!=0)
    if(sum<=180)
    printf("Yes These are the angles of a traingle");
    else
    {
        printf("These are not the angles of a valid triangle\nBecause the sum of all angles of a triangle is 180 degree.");
    }
}