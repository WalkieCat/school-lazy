#include<stdio.h>
#define MAX_LENGTH 100

int main(){
    /*Write a program that accepts 2 string input
    and compare them to see if they are permutation of each other*/
    char str1[MAX_LENGTH], str2[MAX_LENGTH];
    int count1[128] = {0}, count2[128] = {0};
    int i, len1 = 0, len2 = 0;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    //Calculate the length of first string
    while (str1[len1] != '\0'){
        len1++;
    } 

    //Calculate the length of second string
    while (str2[len2] != '\0'){
        len2++;
    }

    //Comparing the lengths i.e if they are different then they can't be permutation
    if (len1 != len2){
        printf("Not permutation\n");
    }

    //Counting frequency of letters in first string
    for (i = 0; i < len1; i++){
        count1[(int)str1[i]]++;
    }

    //Counting frequency of letters in the second string
    for (i = 0; i < len2; i++){
        count2[(int)str2[i]]++;
    }

    //Comparing the frequency to determine permutation
    for (i = 0; i < 128; i++){
        if (count1[i] != count2[i]){
            printf("Not permutation\n");
            return 0;
        }
    }
    printf("The strings are permutation\n");
    return 0;
}