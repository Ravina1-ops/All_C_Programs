#include<stdio.h>
int main(){
    char c;
    printf("\nType a character and press enter key ");
    c = getchar(); // getchar return char value and also show that character in input and need enter key for next line
    printf("\nTyped character is ");
    putchar(c); // give output of vhar values.
    printf("\nType a character again ");
    c = getche(); // return chr value and also show that char in input but dont require enter kry for ouput 
    printf("\nTyped character is ");
    putchar(c);
    printf("\nType a character again ");
    c = getch(); // return  char value but dont show in input and dont require enter key 
    printf("\nTyped character is ");
    putchar(c);
}

    