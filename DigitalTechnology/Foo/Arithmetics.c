#include <stdio.h>

int sumArray (int array[], const int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }
    return sum;
}

int sumArray2 (int *array, const int n) {
    int sum2 = 0;
    int *ptr = array;
    while(ptr < array + n) {
        sum2 += *ptr;
        ptr++;
    }
    return sum2;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int total = sumArray(arr, n);
    int total2 = sumArray2(arr2, n);
    printf("Total sum is: %d\n", total);
    printf("Total sum of array using pointers: %d\n", total2);
    return 0;
}