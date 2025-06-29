//Print The Gp series 3,12,48...
#include<stdio.h>
int main()
{
    int i,n,a=3;
    printf("Enter no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {printf("%d ",a);
    a=a*4;}
}
