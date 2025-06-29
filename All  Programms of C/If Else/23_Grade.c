// to print grade acc to given data 
#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5;
    printf("Marks obtained in 1st subject:");
    scanf("%f",&s1);
    printf("Marks obtained in 2nd subject:");
    scanf("%f",&s2);
    printf("Marks obtained in 3rd subject:");
    scanf("%f",&s3);
    printf("Marks obtained in 4th subject:");
    scanf("%f",&s4);
    printf("Marks obtained in 5th subject:");
    scanf("%f",&s5);
    int total=(s1+s2+s3+s4+s5);
    printf("Total Marks Obtained:%d",total);
    float av=(s1+s2+s3+s4+s5)/5;
    printf("\nPercentage obtained:%f\n",av);
    if(av>=90)
   { printf("Grade A\n");
    printf("Excellent Keep IT up.");}
    else {
        if(av<90&&av>=80)
       { printf("Grade B\n");
        printf(" Very Good Keep Hardwork");}
        else{
            if(av>=70&&av<80)
           { printf("Grade C\n");
            printf("Good But still Improvement needs");}
            else{
                if(av>=60&&av<70)
               { printf("Grade D\n");
                printf("Fair But Needs more improvement");}
                else{
                    if(av>=40&&av<60)
                   { printf("Grade E\n");
                    printf(" ok but Needs a lot Of hardwork");}
                    else{
                        printf("Fail\n");
                        printf("Very Poor");
                    }
                }
            }
        }
    }
}