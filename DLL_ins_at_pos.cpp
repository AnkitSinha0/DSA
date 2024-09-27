#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
    node(int x){
        data=x;
        next =  prev = NULL;
    }
};
void forwardtraverse(node* head){
    node* curr = head;
    while(curr!=NULL){
        cout<<" "<<curr->data<<" ->";
        curr=curr->next;
    }
   cout<<" NULL";
}
node* insertatpos(node* head,int pos,int new_data){
 node* newnode = new node(new_data);

 if(pos==1){
    newnode->next = head;
        if(head!=NULL){
          head->prev = newnode;
        }
        return newnode;
 }
 node *curr = head ;

 for(int i=1;i<pos-1 && curr!=NULL; i++){
    curr=curr->next;
 }
 if(curr==NULL){
    cout<<"postion out of bound"<<endl;
    delete newnode;
    return head;
 }
newnode->prev = curr;
newnode->next = curr->next;
curr->next = newnode;

if(newnode->next!=NULL){
    newnode->next->prev = newnode;
}
return head;

}
int main(){
    node* head = new node(10);
    node* second =  new node(20);
    node* third = new node(30);
    node* fourth = new node(40);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;


    cout<<endl<<"printing before update...."<<endl;
    forwardtraverse(head);

    head=insertatpos(head,6,69);

    cout<<endl<<"printing after update...."<<endl;
    forwardtraverse(head);

}

 