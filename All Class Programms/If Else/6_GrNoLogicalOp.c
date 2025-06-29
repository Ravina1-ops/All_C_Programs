/*To print greatest no. using Logical operators*/
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter Number 1st:");
    scanf("%d",&num1);
    printf("Enter No.2nd:");
    scanf("%d",&num2);
    printf("Enter No 3rd:");
    scanf("%d",&num3);
    if(num1>num2&&num1>num3)
    printf("Number 1st is greatest than 2nd and 3rd");
    if (num2>num1&&num2>num3)
    printf("Number 2nd is greatest than 1st and  3rd");
    if(num3>num2&&num3>num1)
      printf("Number 3rd is greatest than 2nd and 1st");
}