#include <stdio.h>
#include "book.h"

int main() {
    // Create a Book object using the createBook function
    Book* myBook = createBook("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", 1979);

    if (myBook != NULL) {
        // Display book information
        printf("Book Information:\n");
        displayBook(myBook);

        // Free memory allocated for the Book object
        freeBook(myBook);
    }
    else {
        printf("Failed to create the book.\n");
    }

    return 0;
}
