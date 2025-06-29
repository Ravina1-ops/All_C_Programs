//Print the factorial of given no.
#include<stdio.h>
int main()
{
    int n,i,mul=1;
    printf("Enter no.");
    scanf("%d",&n);
for(i=n;i>0;i--)
{mul=mul*i;}
printf("The Factorial is%d",mul);
}