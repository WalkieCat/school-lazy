#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

// Remember to include stack.h in the same directory!

// Do not change anything in this struct definition
struct node {
	int data;
	struct node *next;
};

// Do not change anything in this struct definition
struct _stack {
	struct node *top;
};

// This function has already been done for you
// Read it carefully to give you an idea of how you
// might complete the rest of the implementation
stack create(void) {
	stack s = malloc(sizeof(struct _stack));
	if (s == NULL)
		exit(1);
	s->top = NULL;
	return s;
}

// Complete all of the functions below
void destroy(stack s) {
    struct node* current = s->top;
    struct node* next;
    while (current != NULL){
        next = current->next;
        free(current);
        current = next;
    }
    free(s);
}
void empty(stack s) {
    while (!is_empty(s)) {
        pop(s);
    }
}
int is_empty(stack s) {
    if (s->top == NULL){
        return 1; //For empty
    } else {
        return 0; //For not empty;
    }
}
void push(stack s, int data) {
    struct node* NewNode = (struct node*) malloc(sizeof(struct node));
    if (NewNode == NULL){
        printf("Failed to allocate memory\n");
        exit(1);
    }
    NewNode->data = data;
    NewNode->next = s->top;

    s->top = NewNode;
}
int pop(stack s) {
    if (is_empty(s)) {
        printf("Empty stack\n");
        return -1;
    } 
    int data = s->top->data;
    struct node *temp = s->top;
    s->top = s->top->next;
    free(temp);
    return data;
}

void printStack (stack s) {
    printf("Current stack: ");
    struct node* current = s->top;
    while (current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// You can test your stack by using this main() function
int main() {
    stack s = create();

    // Push some elements onto the stack
    push(s, 10);
    push(s, 20);
    push(s, 30);

    printStack(s);

    printf("Is the stack empty: %d\n", is_empty(s));

    // Pop all elements from the stack
    printf("Popped elements: ");
    while (!is_empty(s)) {
        printf("%d ", pop(s));
    }
    printf("\n");

    // Push some more elements onto the stack
    push(s, 40);
    push(s, 50);

    printStack(s);

    // Pop some elements from the stack
    printf("Popped element: %d\n", pop(s));
    printf("Popped element: %d\n", pop(s));

    // Check if the stack is empty
    printf("Is the stack empty: %d\n", is_empty(s));

    // Destroy the stack
    destroy(s);
    return 0;
}