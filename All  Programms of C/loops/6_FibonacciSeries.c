#include<stdio.h>
int main()
{
    int i,n,first=0,second=1,next;
    printf("Enter No.:");
    scanf("%d",&n);
    printf("The fibonacci series upto %d terms is:\n",n);
    if(n>=1) printf(" %d ",first);
    if(n>=2) printf(" %d ",second);
    for(i=3;i<=n;i++)
    {
        next=first+second;
        printf(" %d ",next);
        first=second;
        second=next;
    }   
}