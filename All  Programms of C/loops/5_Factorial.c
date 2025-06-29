#include<stdio.h>
int main()
{
    int i,n,fac=1;
    printf("Enter Factorial No.:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        fac=fac*i;
        i=i+1;
    }
    printf(" %d",fac);
    return 0;

}