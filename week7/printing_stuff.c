#include <stdio.h>

int main() {
    int integerVal = 42;
    float floatVal = 3.14159;
    char charVal = 'A';
    int hexVal = 255;
    double sciVal = 0.000123456789;

    // TODO: replace the ? symbols to print out each variable in the requested format
    printf("Integer: %?\n", integerVal);
    printf("Floating-Point: %?\n", floatVal);
    printf("Character: %?\n", charVal);
    printf("Hexadecimal: %?\n", hexVal);
    printf("Scientific Notation: %?\n", sciVal);

    // TODO: replace the ? symbol to print out "hello" so that it takes up a width of 10 (5 leading blank characters)
    printf("%?s\n", "Hello");    

    // TODO: replace the ? symbol to print out pi with a precison of 2 decimal places
    printf("%?f\n", 3.14159);   

    // TODO: replace the ? symbols to show the difference between a new line and a tab
    printf("This is a\?new line.\n");
    printf("This is a\?tab.\n");

    return 0;
}




