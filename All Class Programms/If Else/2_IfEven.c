/*Number is Even or not*/
#include<stdio.h>
int main()
{
 int num;
 printf("Enter NUmber:");
 scanf("%d",&num);
 if(num%2==0)
 {
    printf("Number is Even");
 }
 if(num%2!=0)
 {
    printf("Number is not even");
 }
}