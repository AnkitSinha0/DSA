#include <iostream>
using namespace std;

struct node{
int data;
node* next;
node(int x){
data=x;
next=NULL;
}

};
node* insertatpos(node* head,int pos,int new_data){
node* new_node = new node(new_data);
//handle if insertion at pos 1
if(pos==1){
    new_node->next = head;
    return new_node;
}
node* curr =  head;
for(int i=1;i<pos-1 && curr!=NULL; i++){
    curr=curr->next;
}
//handle out of size
if(curr == NULL){
    return head;
}
new_node->next = curr->next;
curr->next = new_node;

return head;

}

void traverse(node *head){
 node *curr = head;
 while(curr!=NULL){
    cout<<endl<<curr->data;
    curr=curr->next;
 }
}


int main(){
node* head = new node(10);
head->next =  new node(20);
head->next->next =  new node(30);
head->next->next->next =  new node(40);

head = insertatpos(head,3,69);
traverse(head);
}
