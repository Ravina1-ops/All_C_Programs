/*To print sum of even no.*/
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter No.:");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        sum=sum+(2*i);
        i=i+1;
    }
    printf("Sum of %d even no.is %d\n",n,sum);
}