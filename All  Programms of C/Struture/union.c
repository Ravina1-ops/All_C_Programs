#include <stdio.h>
#include <string.h>

union Value {
    int integer;
    float floating;
    char string[10];
};

int main() {
    union Value v;
    v.integer = 15;
    printf("Integer: %d\n", v.integer);
    v.floating = 3.14;
    printf("Float: %.2f\n", v.floating);
    strcpy(v.string, "Gohana");
    printf("String: %s\n", v.string);
    printf("Integer (after string): %d\n", v.integer);
    return 0;
}

