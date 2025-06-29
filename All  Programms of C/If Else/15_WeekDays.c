/*To print week days*/
#include<stdio.h>
int main()
{
    int Mon;
    printf("Series Of Week Starts From Monday\n",Mon);
    int days;
    printf("Enter Day number:");
    scanf("%d",&days);
    if((days==1))
    printf("%dst day is Monday",days);
    else{
        if(days==2)
        printf("%dnd day is Tuesday",days);
        else{
            if(days==3)
            printf("%drd day is Wednesday",days);
            else{
                if(days==4)
                printf("%dth day is Thursday",days);
                else{
                    if(days==5)
                    printf("%dth day is friday",days);
                    else{
                        if(days==6)
                        printf("%dth day is Saturday",days);
                        else{
                            if(days==7)
                            printf("%dth day is Sunday",days);
                            else{
                                printf("There are only seven days in a week.");
                            }
                        }
                    }
                }
            }
        }
    }
}