/*To print the no. of days in that given month*/
#include <stdio.h>
int main()
{
    int m;
    printf("Enter Month Number:");
    scanf("%d", &m);
    if ((m == 1) || (m ==3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12))
    {
        printf("No. of days is 31 in this month.");
    }
    else
    {
        if ((m == 4) || (m == 6) || (m == 9) || (m == 11))
        {
            printf("There are 30 days in this month.");
        }
        else
        {
            if (m == 2)
            {
                printf("There are only 28 days in February");
            }
            else
            {
                printf("There are only 12 Months in a year.");
            }
        }
    }
}