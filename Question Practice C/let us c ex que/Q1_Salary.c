#include<stdio.h>
#include<math.h>
int main()
{
    float p;
    printf("Basic Pay:");
    scanf("%f",&p);
    float DA=0.4*p;
    float HRA=0.2*p;
    float Gs=p+DA+HRA;
    printf("Dearness Allowance = %f\nHouse rent = %f\nGross Salary = %f",DA,HRA,Gs);
}