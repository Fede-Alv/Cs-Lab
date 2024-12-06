#include <stdio.h>
#include <string.h>

typedef struct books {
    char title[50];
    char author[50];
    float price;
} book;

void printBook(book b) {
    printf("[Title: %s, Author: %s, Price: %.2f manat]\n", b.title, b.author, b.price);
}

int main() {
    int n;

    printf("Enter the number of books: ");
    scanf("%d", &n);
    getchar();

    book books[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);

        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        if (books[i].title[strlen(books[i].title) - 1] == '\n') {
            books[i].title[strlen(books[i].title) - 1] = '\0';
        }

        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        if (books[i].author[strlen(books[i].author) - 1] == '\n') {
            books[i].author[strlen(books[i].author) - 1] = '\0';
        }

        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar();
    }

    printf("\nDetails of all books:\n");
    for (int i = 0; i < n; i++) {
        printBook(books[i]);
    }

    printf("\nSize of book structure: %lu bytes\n", sizeof(book));
    printf("Explanation: 2 char arrays (100 bytes total), 1 float (4 bytes), possibly with padding for alignment.\n");

    return 0;
}
