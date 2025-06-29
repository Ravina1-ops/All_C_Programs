#include <stdio.h>
#include <string.h>
int main() {
    char str1[50];
    char str2[50];
    char str_concat[100];
    char str_copy[50];
    int len1, len2, cmp;
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    printf("The length of first string is: %d\n", len1);
    printf("The length of second string is: %d\n", len2);
    strcpy(str_concat, str1);
    strcat(str_concat, str2);
    printf("The concatenation of the two strings is: %s\n", str_concat);
    cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("The two strings are equal.\n");
    } else {
        printf("The two strings are not equal.\n");
    }
    strcpy(str_copy, str1);
    printf("The copied first string is: %s\n", str_copy);

    return 0;
}


