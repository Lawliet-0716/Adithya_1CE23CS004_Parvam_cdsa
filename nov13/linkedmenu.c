#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void addNode(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;
    
    newNode->data = value;
    newNode->next = NULL;
    
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}

void deleteNode(struct Node** head, int value) {
    struct Node* temp = *head;
    struct Node* prev = NULL;
    
    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        return;
    }
    
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == NULL) {
        printf("Node with value %d not found.\n", value);
        return;
    }
    
    prev->next = temp->next;
    free(temp);
}

void findNode(struct Node* head, int value) {
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == value) {
            printf("Node with value %d found.\n", value);
            return;
        }
        temp = temp->next;
    }
    printf("Node with value %d not found.\n", value);
}

void printList(struct Node* head) {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    char choice;
    int value;
    
    while (1) {
        printf("Menu:\n");
        printf("A to add a node\n");
        printf("D to delete a node\n");
        printf("F to find a node\n");
        printf("E to exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        
        switch (choice) {
            case 'A':
            case 'a':
                printf("Enter value to add: ");
                scanf("%d", &value);
                addNode(&head, value);
                printList(head);
                break;
                
            case 'D':
            case 'd':
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(&head, value);
                printList(head);
                break;
                
            case 'F':
            case 'f':
                printf("Enter value to find: ");
                scanf("%d", &value);
                findNode(head, value);
                break;
                
            case 'E':
            case 'e':
                printf("Exiting...\n");
                return 0;
                
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    
    return 0;
}