//to print the sum of a given digit
#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    printf("Enter no:");
    scanf("%d",&n);
    rem=0;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("The Sum of digits are %d ",sum);
    
}