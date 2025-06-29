/*TO check whether the no. is Positive, Negative or Zero*/
#include<stdio.h>
int main()
{
    int num1;
    printf("Enter Number:\n");
    scanf("%d",&num1);
    if(num1<0)
    printf("Number is Negative");
    else
    {
        if(num1>0)
        printf("Number is Positive");
        else{
            printf("Number is Zero");
        }
    }
}