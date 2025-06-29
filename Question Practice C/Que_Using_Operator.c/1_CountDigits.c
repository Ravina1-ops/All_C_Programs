//To Count digits of a number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter No.:");
    scanf("%d",&n);
    int count=0;
    while(n>0){
    n=n/10;
    count++;}
    printf("The no. of Digits are: %d ",count);
    
}