/*To print greatest no using nested if else*/
#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num2) {
        if (num1 >= num3) 
            printf("The greatest no. is %d\n", num1);
        else 
            printf("The greatest no. is %d\n", num3);}
 else {
        if (num2 >= num3) 
            printf("The greatest no. is %d\n", num2);
         else 
            printf("The greatest no. is %d\n", num3);
    }
}

