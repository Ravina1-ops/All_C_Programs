/*to print sum of odd no.*/
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter No.:");
    scanf("%d",&n);
    
    i=1;
    while(n>0)
    {
        sum=sum+i;
        i=i+2;
        n--;
    }
    printf("Sum of odd no.is %d\n",sum);
}