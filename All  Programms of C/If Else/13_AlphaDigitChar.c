/*To check whether input character is an alphabet,a digit or a special character*/
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Character:");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("Is is an alphabet");
else{
        if ((ch >= '0' && ch <= '9'))
            printf("It is a Digit.");
        else
        {
            printf("It is a special character.");
        }
    }
}