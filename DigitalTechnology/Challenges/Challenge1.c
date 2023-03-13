//write a program to check if the user input if a prime number or not

#include <stdio.h>

int main(){
    int x, y, z = 0;
    printf("Enter your number: ");
    scanf("%d", &x);

    for (y = 1; y <= x; y++){
        if (x % y == 0){
            z++;
        }
    }
    if (z == 2){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}