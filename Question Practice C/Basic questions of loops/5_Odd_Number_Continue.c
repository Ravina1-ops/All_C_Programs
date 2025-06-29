//WAP to print Odd no. using Continue st
#include<stdio.h>
int main()
{
int i,n;
printf("Enter No:");
scanf("%d",&n);
for(i=1;i<=n;i++)

    {if(i%2==0)
   { continue;}

printf("%d ",i);}
return 0;
}