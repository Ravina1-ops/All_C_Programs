// to calculate profit and loss 
#include<stdio.h>
void main()
{
    float sp,cp;
    int profit,Loss;
    printf("Selling Price:");
    scanf("%f",&sp);
    printf("Cost Price:");
    scanf("%f",&cp);
    if(sp>cp)
    {profit=sp-cp;
    printf("You Have Got a Profit of Rs %d Congratulations.",profit);}
    else{
        Loss=cp-sp;
        printf("You are in Loss of RS %d.\nBe Aware next Time.",Loss);
    }
}