// to calculate simple interest
#include <stdio.h>
void main()
{
    int p,r,t;
    printf("Principle:");
    scanf("%d",&p);
    printf("rate:");
    scanf("%d",&r);
    printf("Time:");
    scanf("%d",&t);
    float amount=(p*r*t)/100;
    printf("interest=%f",amount);
}