//Display the GP 100,50,25.... upto n terms
#include<stdio.h>
int main()
{
    int i,n; float a=100;
    printf("Enter no:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {printf("%2f ",a);
        a=a*1/2;
    }
}