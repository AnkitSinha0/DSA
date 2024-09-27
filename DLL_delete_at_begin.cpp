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
node* forwardtraverse(node* head){
    node* curr = head;
    while(curr!=NULL){
        cout<<" "<<curr->data<<" ->";
        curr=curr->next;
    }
   cout<<" NULL";
}
node* deleteatbegin (node* head){
    if(head==NULL){
        return NULL;
    }
    node* temp= head;

    head=head->next;

    if(head!=NULL){
        head->prev = NULL;
    }
    delete temp;
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

    head=deleteatbegin(head);
    cout<<endl<<"printing after update...."<<endl;
    forwardtraverse(head);

}
