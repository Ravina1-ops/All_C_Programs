#include <stdio.h>
#include <string.h>

struct Book {
    char title[30];
    char author[30];
};

int main() {
    struct Book book1;

    strcpy(book1.title, "The Great Adventure");
    strcpy(book1.author, "Alice Writer");

    printf("Book 1:\n");
    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);

    struct Book book2 = {"Mystery Island", "Bob Author"};

    printf("\nBook 2:\n");
    printf("Title: %s\n", book2.title);
    printf("Author: %s\n", book2.author);

    return 0;
}


