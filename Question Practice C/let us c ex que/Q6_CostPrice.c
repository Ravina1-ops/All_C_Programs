#include<stdio.h>
int main()
{
    float sp;
    printf("Selling Price of 15 items:");
    scanf("%f",&sp);
    int profit;
    printf("Profit :");
    scanf("%d",&profit);
    float cp=sp-profit;
    printf("Cost Price of 15 items:%f",cp);
}