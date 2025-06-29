/*given year is a leap year or not*/
#include <stdio.h>
int main()
{
    int year;
    printf("Enter Year:");
    scanf("%d", &year);
    if (year % 4 == 0)
        printf("This year is a leap year.");
    else
    {
        printf("this is not leap year");
    }
}
