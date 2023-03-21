#include <stdio.h>

int stringLength(const char *string) {
    const char *currentChar = string;
    while(*currentChar != 0) {
        currentChar++;
    }
    return (int)(currentChar - string);
}

int main() {
    //change the string to whatever you like
    const char *str = "Hello";
    printf("The length of the string is: %d\n", stringLength(str));
    return 0;
}