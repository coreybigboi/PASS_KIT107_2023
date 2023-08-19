#ifndef BOOK_H
#define BOOK_H

// Define the Book struct
typedef struct Book {
    char title[100];
    char author[100];
    int publicationYear;
} Book;

// Function prototypes
Book* createBook(char* title, char* author, int publicationYear);
void displayBook(Book* book);
void freeBook(Book* book);

#endif
