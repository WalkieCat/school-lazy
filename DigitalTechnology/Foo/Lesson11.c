#include <stdio.h>

void substring(char source[], int start, int count, char result[]){
    int i;
    for (i = 0; i < count && source[start +i] != '\0'; i++){
        result[i] = source[start + i];
    }
    result[i] = '\0';
}

int main() {
    char source[100];
    int start, count;
    char result[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    printf("Enter the start index: ");
    scanf("%d", &start);
    printf("Enter the number of characters to extract: ");
    scanf("%d", &count);

    substring(source, start, count, result);

    printf("Substring: %s\n", result);

    return 0;
}