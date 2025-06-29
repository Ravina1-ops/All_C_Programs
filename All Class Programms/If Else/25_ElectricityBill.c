#include<stdio.h>
int main()
{
    float charge,bill,units,surcharge;
    printf("Enter the units: ");
    scanf("%f",&units);
    if(units<=50)
    {
        charge=units*0.5;
    }
    else if(units>50&&units<=150)
    {
        charge=0.5*50+(units-50*0.75);
    }
    else if(units>150&&units<=250)
    {
        charge=0.5*50+0.75*150+(units-150)*1.2;
    }
    else if (units>250)
    {
        charge=0.5*50+0.75*150+1.2*250+(units-250)*1.5;
    }
    else{
        printf("Enter the valid units");
    }
    surcharge=0.2*charge;
    bill=charge+surcharge;
    printf("The Electricity bill is %f",bill);
}