/*Nested If Else statment*/
#include<stdio.h>
int main()
{
    int a=24,b=23;
    printf("If you are CSE student Your Roll no series: %d\nIf you are IT student your Roll no. series: %d",a,b);
    int num;
    printf("\nEnter You Roll No. Series:");
    scanf("%d",&num);
    if(num==24)
    {
        printf("You are a Cse student.");
    }
    else{
        if(num==23)
        printf("You are an IT student.");
        else{
            printf("You are a Student Of ECE");
        }
    }
    int num1;
    printf("\nEnter Your Class Roll no.:");
    scanf("%d",&num1);
        if(num1<=25){
        printf("You are in group 1st.");
        printf("\nMake a program to calculate area of shapes.");
    }
    else
    {
        printf("\nYou are in group 2nd.");
        printf("\nMake a program to calculate perimeter of shapes.");
    }
    printf("\nAll The Best.");
}