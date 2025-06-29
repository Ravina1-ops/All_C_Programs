//To print the sum of all the even digits of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter No.");
    scanf("%d",&n);
    int sum=0,k;
    while(n!=0){
        k=n%10;
    if(k%2==0)
    sum=sum+k;
    n=n/10;
    }
    printf("Sum of even Digits %d",sum);
}