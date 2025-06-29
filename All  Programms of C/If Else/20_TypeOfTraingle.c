/*To check which type of a traingle is it*/
#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter Sides Of Triangle:");
    scanf("%d %d %d",&s1,&s2,&s3);
    if((s1==s2==s3))
    {
    printf("The Given Sides are the sides of an equilateral triangle.");
}
else{
    if ((s1,s2!=s3)&&(s2,s3!=s1)&&(s3,s1!=s2))
    printf("The Given Sides are the sides of a scalen triangle.");
    else{
        printf("The Given Sides are the sides of an isoscales triangle.");
    }
    
}
}