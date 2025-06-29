
#include<stdio.h>
int main()
{
    int a,c;
    printf("Enter any No.: ");
    scanf("%d",&a);
    c=a++;
    printf("Post increment :%d\n",a);
    c=++a;
    printf("pre increment:%d\n",a);
    c=a--;
    printf("Post decrement:%d \n",a);
    c=--a;
    printf("pre decrement:%d\n",a);
}

