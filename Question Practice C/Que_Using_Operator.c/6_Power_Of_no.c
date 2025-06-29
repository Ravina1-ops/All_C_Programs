//WAP to find value of one no. raised to the power of another
#include<stdio.h>
int main()
{
    int a,b,pow=1,i;
    printf("Enter no.:");
    scanf("%d",&a);
    printf("Enter Power:");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        pow=pow*a;
    }
    printf("Ans is %d",pow);
    
}