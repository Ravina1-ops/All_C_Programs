#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter Natural No.:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("Sum of first %d Natural no.is : %d\n",n,sum);
}

