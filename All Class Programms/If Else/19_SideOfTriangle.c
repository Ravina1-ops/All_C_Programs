/*To input sides of a triangle and check whether these are sides of a valid triangle or not*/
#include<stdio.h>
#include<math.h>
int main()
{
    float s1,s2,s3;
    printf("Enter Sides of triangle:");
    scanf("%f %f %f",&s1,&s2,&s3);
    int sum1=s1+s2,sum2=s2+s3,sum3=s1+s3;
    if((sum1>=s3)&&(sum2>=s1)&&(sum3>=s2))
    printf("Yes These Sides Are valid sides of a triangle.");
    else{
        printf("No These are not valid sides of traingle.");
    }
}