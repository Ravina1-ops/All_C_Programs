/*To print two digit Greater no.*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter number 1st and 2nd:");
    scanf ("%d" "%d",&num1,&num2);
    printf("Number1=%d\nNumber2=%d",num1,num2);
    if(num1>num2)
    {
        printf("\nnum1 is greater than num2.");
    }
    else{
        printf("\nnum2 is greater than num1.");
    }
}