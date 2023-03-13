#include <stdio.h>

int main(void) {
	printf("Enter your number.\n");

	// scanf() will collect user input it and store it in 'number'
	int number;
	scanf("%i", &number);

	// For now, just use the ampersand in the scanf call
	// We will talk more about what this notation means later
	// Use the variable 'number' like your normally would after scanf()
	printf("Your number: %i\n", number);

	// INSERT YOUR CODE FOR THE CHALLENGE BELOW THIS LINE
    while (number != 0){
        int reverse = number % 10;
        number = number /10;
        printf("%i", reverse);
    }



	printf("\n");

	return 0;
}