#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    printf("Temp. in Fahrenheit:");
    scanf("%d",&t);
    float c=(t-32)*5/9;
    printf("Temperature in Centigrade = %f",c);
}