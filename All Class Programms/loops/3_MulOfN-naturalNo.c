#include<stdio.h>
int main()
{
    int i,n,mul=1;
    printf("Enter Natural no.:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        mul=mul*i;
        i=i+1;
    }
    printf("The product of Natural No is %d\n",mul);
}