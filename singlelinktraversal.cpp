#include <iostream>
using namespace std;
struct node{
  int data;
  struct node* next;
  node(int x){
  data = x;
  next =  NULL;
  }
};

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
   head->next->next =  new node(30);
   head->next->next->next =  new node(40);

traversal(head);



}
