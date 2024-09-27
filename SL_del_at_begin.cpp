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
node* deleteatbegin(node* head){
if (head==NULL){
    return head;
}
node* temp = head;
head = head->next;
delete temp;
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
    head = deleteatbegin(head);
    traversal(head);

}
