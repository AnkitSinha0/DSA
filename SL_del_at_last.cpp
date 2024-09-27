#include <iostream>
using namespace std;
struct node{
 int data;
 node* next;
 node(int x){
 data = x;
 next = NULL;
 }
};
node* deleteatend(node* head){
   if(head==NULL){
    return NULL;
   }
   
   if(head->next==NULL){
   delete head;
   return NULL;
   }
   
  
   node* second_last = head;
   while(second_last->next->next!=NULL){
    second_last=second_last->next;
   }
   delete (second_last->next);
   second_last->next = NULL;
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
    head->next->next->next =  new node(40);
    head = deleteatend(head);
    traversal(head);

}