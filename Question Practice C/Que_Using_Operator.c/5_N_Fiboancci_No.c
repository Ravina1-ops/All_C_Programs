//Print first n fibonacci numbers
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter no.");
    scanf("%d",&n);
    int a=1,b=1,sum=1;
    printf("The 1 Fibonacci no is %d\n",a);
    printf("The 2 fibonacci no is %d ",b);
    for(i=3;i<=n;i++)
    {
        sum=a+b;
        printf("\nThe %d Fibonacci no is %d",i,sum);
        a=b;
        b=sum;
        
    }
}