#include<stdio.h>
int main()
{
    int i,n,table;
    printf("Enter Table Number:");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {

        printf("%d\n",n*i);
        i=i+1;
    }
}
