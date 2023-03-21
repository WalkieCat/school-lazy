#include <stdio.h>

void copyString(char* to, char* from) {
    while (*from != '\0') {
        *to = *from;
        from++;
        to++;
    }
    *to = '\0';
}

int main() {
    char source[] = "Hello, world!";
    char dest[20];
    copyString(dest, source);
    printf("The copied string is: %s\n", dest);
    return 0;
}
