// C Implementation to insert a node before
// a given key using iteratinon
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int x);

// Iterative function to insert a new node with value 
// newData before the node with the given key
struct Node* insertBeforeKey(struct Node* head, int key,
                             int newData) {
  
    // Special case: if the key is at the head
    if (head == NULL) {
        return NULL;
    }
    if (head->data == key) {
        struct Node* newNode = createNode(newData);
        newNode->next = head;
        return newNode;
    }

    // Initialize current and previous pointers
    struct Node* curr = head;
    struct Node* prev = NULL;

    // Traverse the list to find the key
    while (curr != NULL && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }

    // If the key was found
    if (curr != NULL) {
        struct Node* newNode = createNode(newData);
        prev->next = newNode;
        newNode->next = curr;
    }

    return head;
}

void printList(struct Node* node) {
    struct Node* curr = node;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

struct Node* createNode(int x) {
    struct Node* new_node 
      = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = x;
    new_node->next = NULL;
    return new_node;
}

int main() {
  
    // Create a hard-coded linked list: 
    // 1 -> 2 -> 3 -> 4 -> 5
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    int newData = 6;
    int key = 2;

    head = insertBeforeKey(head, key, newData);

    printList(head);

    return 0;
}
