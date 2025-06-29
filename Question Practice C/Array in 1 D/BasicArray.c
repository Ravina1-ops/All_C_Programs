#include<stdio.h>
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    { printf("\nenter elements number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)

    printf("%d ",a[i]); 
}