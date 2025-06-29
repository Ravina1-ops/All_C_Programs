// to find roots of quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Coefficient of x square:");
    scanf("%f",&a);
    printf("Coefficient of x:");
    scanf("%f",&b);
    printf("Constant Term:");
    scanf("%f",&c);
    if(a==0)
    printf("This is not a quadratic equation\n");
    float Root1=(-b+sqrt(b*b-4*a*c))/(2*a),
    Root2=(-b-sqrt(b*b-4*a*c))/(2*a);

    if((Root1==Root2)&&(Root1>0&&Root2>=0))
    { printf("Roots are Equal and repeated\n ");}
     else
    {
     if(Root1!=Root2)
     printf("Roots of this equation are Real and Distinct\n ");
        else{
            printf("This Equation has Complex roots.\n");
        }
    }
    printf("Roots Of The Equation: %f and %f",Root1,Root2);
}

