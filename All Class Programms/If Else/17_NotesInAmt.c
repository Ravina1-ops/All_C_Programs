#include <stdio.h>
int main()
{
    int n, notes, amount;
    printf("Enter amount :");
    scanf("%d", &amount);
    printf("Enter Note You want to Calculate:");
    scanf("%d",& n);
    notes = amount / n;
    if (n == 2000)
        printf("No Of Notes of %d In given amount is %d", n, notes);
    else if (n == 500)
        printf("No Of Notes of %d In given amount is %d", n, notes);
    else if (n == 200)
        printf("No Of Notes of %d In given amount is %d", n, notes);
    else if (n == 100)
        printf("No Of Notes of %d In given amount is %d", n, notes);
    else if (n == 50)
        printf("No Of Notes of %d In given amount is %d", n, notes);
    else if (n == 20)
        printf("No Of Notes of %d In given amount is %d", n, notes);
    else if (n == 10)
        printf("No Of Notes of %d In given amount is %d", n, notes);
    return 0;
}