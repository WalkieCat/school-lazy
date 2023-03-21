#include <stdio.h>

int main(void) {
    /*int x = 4;      //integer named x is set to value 4
    int *pX = &x;   //integer pointer named pX is set to the address of x
    int y = *pX;    //integer y is set to the thing pointed to by pX
    printf("%d\n", y);
    return 0;*/


    int age = 21;
    int *pAge = &age;
    printf("Address of age: %p\n", &age);
    printf("The value of pAge: %p\n", pAge);
    printf("The value at stored address: %d\n", *pAge);
    printf("The value of age: %d\n", age);
}

/*Pointers syntax can be read from right to left
For example, the second line can be read as:
the address of x is set to pX which points to an int*/

//Pointer is how to access a variable by reference 

//Make sure the data type of the pointer is the same as the variable it is pointing to

/*Bro code explanation: 
A variable-like reference that holds a memory address to another pointer*/