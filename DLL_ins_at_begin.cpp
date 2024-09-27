// C++ Program to insert a new node at the
// beginning of doubly linked list 

#include <iostream>
using namespace std;

// Node structure for the doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int d) { 
      data = d; 
      prev = next = NULL;
    }
};

// Insert a node at the beginning
Node* insertBegin(Node* head, int data) {
    
    // Create a new node
    Node* new_node = new Node(data);
    
    // Make next of it as head
    new_node->next = head;
    
    // Set previous of head as new node
    if (head != NULL) {
        head->prev = new_node;
    }
    
    // Return new node as new head
    return new_node;
}

void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
  	cout << "\n";
}

int main() {
  
    // Create a hardcoded linked list:
  	// 2 <-> 3 <-> 4
    Node* head = new Node(2);
    Node* temp1 = new Node(3);
    Node* temp2 = new Node(4);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

  	// Print the original list
    cout << "Original Linked List: ";
    printList(head);

    // Insert a new node at the front of the list
    head = insertBegin(head, 1);

    // Print the updated list
  	cout << "After inserting Node 1 at the front: ";
    printList(head);
  	
    return 0;
}
