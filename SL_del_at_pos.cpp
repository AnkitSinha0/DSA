#include <iostream>
using namespace std;
struct node{
int data;
struct node* next;
node(int x){
data = x;
next = NULL;
}
};
node* deleteatpos(node* head,int pos){

if(head==NULL || pos < 1){
    return head;
}
if(pos==1){
    node* temp = head;
    head=head->next;
    delete temp;
    return head;
}
node* curr = head;
node* prev = NULL;
int coun=1;
while(coun!=pos && curr!=NULL){
    prev = curr;
    curr = curr->next;
    coun++;
}

if(curr==NULL){
    return head;
}

prev->next = curr->next;
delete curr;
return head;

}
void traversal(node *head){
 node *curr = head;
 while(curr!=NULL){
    cout<<endl<<curr->data;
    curr=curr->next;
 }
}
int main(){

node* head = new node(10);
head->next = new node(20);
head->next->next = new node(30);
head->next->next->next = new node(40);

head=deleteatpos(head,4);

traversal(head);

}

// C++ function to delete a node at a specific position
Node* deleteAtPosition(Node* head, int position)
{
    // If the list is empty or the position is invalid
    if (head == nullptr || position < 1) {
        return head;
    }

    // If the head needs to be deleted
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Traverse to the node before the position to be
    // deleted
    Node* current = head;
    for (int i = 1; i < position - 1 && current != nullptr;
         i++) {
        current = current->next;
    }

    // If the position is out of range
    if (current == NULL || current->next == nullptr) {
        return;
    }

    // Store the node to be deleted
    Node* temp = current->next;

    // Update the links to bypass the node to be deleted
    current->next = current->next->next;

    // Delete the node
    delete temp;
  
    return head;
}

*/