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
node* insertatend(node* head){
 node* newnode = new node(5);

 if(head==NULL){
    return newnode;
    //OR head = newnode;
    //return head; OR make else statement with last statement as return head
 }

 node* curr = head;
 while(curr->next!=NULL){
    curr=curr->next;
 }
 curr->next = newnode;
 newnode->prev= curr;
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

    head=insertatend(head);

    cout<<endl<<"printing after update...."<<endl;
    forwardtraverse(head);

}

