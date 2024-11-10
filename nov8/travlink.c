#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int new_data) {
    struct Node* new_node = 
       (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

// Function to traverse and print the singly linked list
void traverseList(struct Node* head) {
  
    // Loop that runs until head is NULL
    while (head != NULL) {
      
        // Printing data of current node
        printf("%d ", head->data);

        // Moving to the next node
        head = head->next;
    }
    printf("\n");
}

// Driver code
int main() {
  
    // Create a hard-coded linked list:
    // 10 -> 20 -> 30 -> 40
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);

    // Example of traversing the node and printing
    traverseList(head);

    return 0;
}
