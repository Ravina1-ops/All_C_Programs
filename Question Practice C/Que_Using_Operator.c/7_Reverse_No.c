//To print the reverse of a given number
#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter no.");
    scanf("%d",&n);
    while(n!=0){
    rev=n%10;
    n=n/10;
    printf("%d",rev);}

}