//Print The nth Fibonacci No.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter No.");
    scanf("%d",&n);
    int a=1,b=1,sum=1;
    for(i=1;i<=n-2;i++)
   { sum=a+b;
a=b;
    b=sum;}
    printf("The fibonacci of %d is no. %d ",n,sum);
   }
   