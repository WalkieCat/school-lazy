#include <stdio.h>

int main(){
    int i, arr[10];
    arr[0] = 0;
    arr[1] = 1;
    for (i = 2; i <= 10; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    printf("The Fibonacci sequence is as follow ");
    for (i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
    //Fib sequence
    //Make an array, set the zero index = 0 and first index = 1
    //Formula:
    //array = array[i-1] + array[i-2]
}