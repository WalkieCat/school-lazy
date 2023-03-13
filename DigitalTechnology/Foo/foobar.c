#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

Node *createNode(int value) {
    Node *newNode = malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void insertNodeAtHead(Node **head, int value, int *length) {
    Node *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
    (*length)++;
}

void insertNodeAtEnd(Node **head, Node **tail, int value, int *length) {
    Node *newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
    } else {
        (*tail)->next = newNode;
    }
    *tail = newNode;
    (*length)++;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int length = 0;

    // Insert nodes at the end of the linked list
    insertNodeAtEnd(&head, &tail, 10, &length);
    insertNodeAtEnd(&head, &tail, 15, &length);
    insertNodeAtEnd(&head, &tail, 20, &length);

    // Print the linked list
    printf("Linked list:\n");
    Node *current = head;
    while (current != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }

    // Insert a node at the head of the linked list
    insertNodeAtHead(&head, 5, &length);

    // Print the updated linked list
    printf("\nLinked list after inserting a new node at the head:\n");
    current = head;
    while (current != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }

    printf("Linked list length: %d\n", length);

    return 0;
}
