/*To calculate salary of an employee*/
#include<stdio.h>
int main()
{
    float Basic,Hra,DA;
    printf("Basic Salary:");
    scanf("%f",&Basic);
    if(Basic<=10000)
    {Hra=0.2*Basic,DA=0.8*Basic;
     }
     else{
        if(Basic<=20000)
        {Hra=0.25*Basic,DA=0.9*Basic;
        }
        else
        {Hra=0.3*Basic,DA=0.95*Basic;
        }
     }
     float Gross=Basic+Hra+DA;
     printf("Gross Salary Of Employee:%f\n",Gross);
}

