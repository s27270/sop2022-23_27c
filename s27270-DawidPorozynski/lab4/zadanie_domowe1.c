#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void addToStart(struct Node** headRef, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *headRef;
    *headRef = newNode;
}


void addToEnd(struct Node** headRef, int data) {
    struct Node* newNode = createNode(data);
    struct Node* currNode;
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    currNode = *headRef;
    while (currNode->next != NULL) {
        currNode = currNode->next;
    }
    currNode->next = newNode;
}


void deleteNode(struct Node** headRef, int data) {
    struct Node* currNode;
    struct Node* temp;
    if (*headRef == NULL) {
        return;
    }
    if ((*headRef)->data == data) {
        temp = *headRef;
        *headRef = (*headRef)->next;
        free(temp);
        return;
    }
    currNode = *headRef;
    while (currNode->next != NULL && currNode->next->data != data) {
        currNode = currNode->next;
    }
    if (currNode->next == NULL) {
        return;
    }
    temp = currNode->next;
    currNode->next = currNode->next->next;
    free(temp);
}

void printList(struct Node* head) {
    printf("Lista: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;  
    addToEnd(&head, 1);
    addToEnd(&head, 2);
    addToStart(&head, 3);
    printList(head);  
    deleteNode(&head, 1);
    printList(head);  
    return 0;
}