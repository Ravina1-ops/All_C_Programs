// to calculate percentage and av marks 
#include<stdio.h>
void main()
{
    float s1,s2,s3,s4,s5;
    printf("Marks obtained in 1st subject:");
    scanf("%f",&s1);
    printf("Marks obtained in 2nd subject:");
    scanf("%f",&s2);
    printf("Marks obtained in 3rd subject:");
    scanf("%f",&s3);
    printf("Marks obtained in 4th subject:");
    scanf("%f",&s4);
    printf("Marks obtained in 5th subject:");
    scanf("%f",&s5);
    int total=(s1+s2+s3+s4+s5);
    printf("Total Marks Obtained:%d",total);
    float av=(s1+s2+s3+s4+s5)/5;
    printf("\nAverage marks obtained in five subjects:%f",av);
}