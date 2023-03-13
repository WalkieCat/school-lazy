/*ATTENTION
This was made with the help of ChatGPT 
and therefore does not comply with the correct requirement*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

//Function to insert a new node at the beginning of the list
void insertAtBeginning(struct node** head, int value) {
    // create a new node
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    // make the new node the new head of the list
    newNode->next = *head;
    *head = newNode;
}

//Function to insert a new node at the end of the list
void insertAtEnd(struct node** head, int value) {
    // create a new node
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    //If the list is empty, make the new node the head of the list
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    //Traverse the list to find the last node
    struct node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    //Make the new node the next node of the last node
    current->next = newNode;
}

//Function to print the linked list
void printList(struct node* head) {
    struct node* nodePointer = head;
    while (nodePointer != NULL) {
        printf("%d\n", nodePointer->data);
        nodePointer = nodePointer->next;
    }
}
void removeNode(struct node** head, int position) {
    //If the list is empty, print an error message and return
    if (*head == NULL) {
        printf("Error: the list is empty\n");
        return;
    }
    //If the given position is 0, remove the head node and update the head pointer
    if (position == 0) {
        struct node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    //Traverse the list to find the node before the one to be removed
    struct node* current = *head;
    int i = 0;
    while (i < position - 1) {
        current = current->next;
        i++;
        //If we reach the end of the list before reaching the given position, print an error message and return
        if (current == NULL) {
            printf("Error: the list has less than %d nodes\n", position + 1);
            return;
        }
    }
    // remove the node at the given position
    struct node* temp = current->next;
    current->next = temp->next;
    free(temp);
}


int main() {
    //Initialize a linked list with three values
    //Original values can be changed here, and can also be added
    struct node* head = NULL;
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 15);
    insertAtBeginning(&head, 10);

    //Print the original list
    printf("Original list:\n");
    printList(head);

    //Insert a new value at the end of the list
    //Change the value to which ever value you like
    insertAtEnd(&head, 25);

    //Print the list with the new value at the end
    printf("\nList with new value at the end:\n");
    printList(head);

    //Insert a new value at the beginning of the list
    insertAtBeginning(&head, 5);

    //Print the list with the new value at the beginning and end
    printf("\nList with new value at the beginning and end:\n");
    printList(head);

    //Removing node, the index and the value can be changed
    printf("\nRemoving node\n");
    removeNode(&head, 1);
    printList(head);

    return 0;
}