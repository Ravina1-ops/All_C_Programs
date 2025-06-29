#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter Natural no.:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d\n",i);
        i=i+1;
    }
    printf("End Of series.");
}