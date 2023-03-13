#include <stdio.h>

void insertString(char text[], char str[], int position) {
    int i, j, k, lenText = 0, lenStr = 0;
    while (text[lenText] != '\0') {
        lenText++;
    }
    while (str[lenStr] != '\0') {
        lenStr++;
    }
    for (i = lenText - 1; i >= position; i--) {
        text[i + lenStr] = text[i];
        k++;
    }
    for (j = 0, k = position; j < lenStr && k < lenText; j++, k++) {
        text[k] = str[j];
    }
    text[lenText + lenStr] = '\0';
}


int main(){
    char text[50] = "The quick brown fox jumps over the lazy dog";
    char str[20] = "red ";

    insertString(text, str, 4);
    printf("%s\n", text);
    return 0;
}

//Change the text array, the string array and the position to satisfy your needs :)