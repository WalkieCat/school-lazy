#include <stdio.h>

int findString(char source[], char search[]) {
    int i, j, k;

    for (i = 0; source[i] != '\0'; i++) {
        k = i;
        for (j = 0; search[j] != '\0' && source[k] == search[j]; j++, k++) {
            // continue searching
        }
        if (search[j] == '\0') {
            // search successful, return index position
            return i;
        }
    }

    // search failed, return -1
    return -1;
}

int main() {
    char source[100], search[100];
    int position;

    printf("Enter source string: ");
    scanf("%99[^\n]", source);

    printf("Enter search string: ");
    scanf(" %99[^\n]", search);

    position = findString(source, search);

    if (position != -1) {
        printf("Search successful! Substring '%s' found at index %d\n", search, position);
    } else {
        printf("Search failed! Substring '%s' not found.\n", search);
    }

    return 0;
}
