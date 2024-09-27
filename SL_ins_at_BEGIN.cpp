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
node* insertatbegin(node* head,int new_data){
node* new_node = new node(new_data);
new_node->next = head;
return new_node;
/*
head = new_node;
return head;
*/
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
//if list is empty
//node* head = NULL;

head=insertatbegin(head,40);

traversal(head);

}
