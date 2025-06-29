#include<stdio.h>
int main()
{
    int n,i,a=4;
    printf("Enter no:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {printf("%d ",a);
    a=a+3;}
}