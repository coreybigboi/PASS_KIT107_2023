#include <stdio.h>
#include <stdlib.h> // Needed for malloc and free

typedef enum {
    //TODO: make the enum hold the following: SEDAN, SUV, HATCHBACK, CONVERTIBLE
} CarType;

typedef struct {
    char brand[50];
    char model[50];
    int year;
    //TODO: add another field called "type". This field represents the CarType enum created earlier
} Car;

int main() {
    // TODO: complete the assignment of myCarPtr to dynamically allocate memory for a Car struct (hint: use malloc and sizeof)
    Car* myCarPtr;

    if (myCarPtr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Return non-zero to indicate an error
    }

    // Assign values using the pointer
    strcpy(myCarPtr->brand, "Ford");
    strcpy(myCarPtr->model, "Mustang");
    //TODO: assign values to the year and type fields

    // Display the car information using the pointer
    printf("Car Information:\n");
    //TODO: print the brand, model, year and type on new lines (hint: you may need to use a switch statement for printing the car type)

    //TODO: don't forget to free the dynamically allocated memory

    return 0; // Return 0 to indicate successful completion
}
