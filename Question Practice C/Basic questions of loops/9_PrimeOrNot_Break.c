//WAP to print a no is prime or not using Break st.
#include<stdio.h>
int main()
{
    int n,i,a=0;
    printf("Enter any No:");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {if(n%i==0)
break;
a=1;
}
if(n==1) printf("1 is neither Prime Nor Composite");
else if(a==0)
printf("No. is Prime");
else
{
    printf("No is Composite");
}
}