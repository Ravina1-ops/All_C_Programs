#include<stdio.h>
#include<math.h>
int main()
{
    int d1;
    printf("Distance between City1 and City2 in KM:");
    scanf("%d",&d1);
    float m=d1*1000;
    float f=d1*3280.8;
    float cm=d1*10000;
    float In=d1*39370.0;
    float mm=d1*100000;
    printf("In meters = %f\nIn feet = %f\nIn centimeters = %f\nIn Inches = %f\nIn Millimeters = %f",m,f,cm,In,mm);
}