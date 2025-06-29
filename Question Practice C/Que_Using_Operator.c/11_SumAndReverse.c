//To print The sum and reverse of a given number
#include<stdio.h>
int main()
{
    int n,sum=0,rev=0;
    printf("enter No.");
    scanf("%d",&n);
while(n!=0){
rev=n%10;
n=n/10;
printf("%d",rev);}
printf("\nThe sum of digits of this no.%d",sum);
}