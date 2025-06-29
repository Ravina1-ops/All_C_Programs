// to calculate all operation by giving inputs
#include <stdio.h>
int main()
{
    int num1,num2,sum,sub,mul,div,mod;
    printf("Enter number 1st : ");
    scanf("%d",&num1);
    printf("Enter number 2nd : ");
    scanf("%d",&num2);
    sum=num1+num2,sub=num1-num2,
    mul=num1*num2,div=num1/num2,
    mod=num1%num2;
    printf("sum=%d\nsub=%d\nmul=%d\ndiv=%d\nmod=%d",sum,sub,mul,div,mod);
}

