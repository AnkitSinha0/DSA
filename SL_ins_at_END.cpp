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
void insertatend(node* head,int new_data){
node* new_node = new node(new_data);
  if (head == nullptr) 
        return new_node;
node* curr = head;

while(curr->next!=NULL){
    curr=curr->next;
}

curr->next = new_node;


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



insertatend(head,45);

traversal(head);

}


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
node* insertatend(node* head,int new_data){
node* new_node = new node(new_data);
node* curr = head;
if(head==NULL){
    return new_node;
}
while(curr->next!=NULL){
    curr=curr->next;
}

curr->next = new_node;
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



head=insertatend(head,45);

traversal(head);

}
