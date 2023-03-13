#include <stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node* next;
};

void insertNodeAtHead(struct node** head, int payload) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->value = payload;
    newNode->next = *head;
    *head = newNode;
}

void insertNode (struct node* head, int payload) {
    struct node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = malloc(sizeof(struct node));
    current->next->value = payload;
    current->next->next = NULL;
}
void removeNode(struct node** head, int position) {
    if (*head == NULL) {
        printf("Error, the list is empty\n");
        return;
    }

    struct node* currentNode = *head;
    struct node* prevNode = NULL;

    for (int i = 0; i < position; i++) {
        prevNode = currentNode;
        currentNode = currentNode->next;

        if (currentNode == NULL) {
            printf("Error, Position %d is out of bound", position);
            return;
        }
    }

    if (prevNode == NULL) {
        *head = currentNode->next;
    }
    else {
        prevNode->next = currentNode->next;
    }

    free(currentNode);
}

int main() {
    struct node node1 = {20, NULL};
    struct node node2 = {15, &node1};
    struct node node3 = {10, &node2};
    struct node* head =&node3;

    struct node* nodePointer = &node3;
    while (nodePointer != NULL) {
        printf("%d\n", nodePointer->value);
        nodePointer = nodePointer->next;
    }
    
    printf("After inserting node at end:\n");
    insertNode(head, 25);
    nodePointer = head;
    while(nodePointer != NULL) {
        printf("%d\n", nodePointer->value);
        nodePointer = nodePointer->next;
    }
    
    printf("After inserting node at head:\n");
    insertNodeAtHead(&head, 5);
    nodePointer = head;
    while (nodePointer != NULL) {
        printf("%d\n", nodePointer->value);
        nodePointer = nodePointer->next;
    }
    //The position can be changed to any value, by changing the int value in the function call
    printf("After removing the node at position 2:\n");
    removeNode(&head, 2);
    nodePointer = head;
    while(nodePointer != NULL) {
        printf("%d\n", nodePointer->value);
        nodePointer = nodePointer->next;
    }
    return 0;
}