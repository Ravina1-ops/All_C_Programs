#include<stdio.h>
int main()
{
int n,i;
printf("Enter No upto which AP series:");
scanf("%d",&n);
for(i=1;i<=1+(n-1)*2;i=i+2)
printf("%d ",i);

}
