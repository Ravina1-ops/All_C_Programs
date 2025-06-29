#include<stdio.h>
#include<math.h>
void main()
{
    float cp, sp;
    printf("Cost price:");
    scanf("%f",&cp);
    printf("Selling price:");
    scanf("%f",&sp);
    float loss=(sp-cp);
    printf("Loss = %f",loss);
}