/*check whether the no. is divisible by 5 and 11*/
#include<stdio.h>
int main()
{
    int num1;
    printf("Enter Your Digit:\n");
    scanf("%d",&num1);
    if(num1%5==0&&num1%11==0)
    printf("This is divisible by 5 and 11");
    else{
        printf("This is not divisible by 5 and 11");
    }
}