#include <stdio.h>

int main() {
    char ch;
    int num;

    printf("Enter a character: ");
    ch = getchar();
    printf("You entered: ");
    putchar(ch);
    printf("\n");

    printf("Enter an integer: ");
    scanf("%d", &num); // Note the '&' before num (address-of operator)
    printf("You entered the integer: %d\n", num);

    return 0;
}