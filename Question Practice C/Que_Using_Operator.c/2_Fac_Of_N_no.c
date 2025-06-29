//Print the Factorial of first n no.
#include<stdio.h>
int main()
{
    int n,i,mul=1;
    printf("Enter No.");
    scanf("%d",&n);
    for(i=1;i<=n;)
    {mul=mul*i;
    printf("The Factorial of %d is = %d\n",i,mul);
    i++;
}}