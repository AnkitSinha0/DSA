/*In linked_list three data fields as follows
1.passenger ID
2.name
3.group
As passengers arrive they should be inserted into linked list in ascending order based on thier boarding group
(A at start B after A grouped data ends C after B grouped data ends)*/
#include <iostream>
#include <cstring>
using namespace std;
struct node{
 int id;
 char name[10];
 char Group;
 struct node* next;
 node(int x,char y[], char z){
   id=x;
   strcpy(name,y);
   Group=z;
   next=NULL;
 }
};
void print(node* head){
node* curr =  head;
while(curr!=NULL){
    cout<<curr->id<<" "<<curr->name<<" "<<curr->Group<<" -> ";
    curr=curr->next;
}
cout<<"NULL";
}

node* insertatbegin(node* head,int m,char n[],char o){
node* new_node = new node(m,n,o);
new_node->next = head;
return new_node;
}

node* insertatend(node* head,int m,char n[],char o){
node* new_node = new node(m,n,o);
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

node* insertatpos(node* head,int m,char n[],char o) {
    node* new_node = new node(m,n,o);
    if (head == NULL) {
        return new_node;
    }
    node* curr=head;
    node* prev=NULL;
    while (curr->Group!='B') {
        prev=curr;
        curr=curr->next;
    }
        prev->next = new_node;
        new_node->next = curr;
        return head;
}
int main(){
struct node* head = new node(10,"ankit",'A');
head->next = new node(20,"varun",'B');
head->next->next =  new node(30,"sameer",'C');
cout<<endl<<"Printing Original Linked List........."<<endl;
print(head);
char g;
int i;
char n[10];
cout<<endl<<"enter the group: ";
cin>>g;
cout<<endl<<"enter the ID: ";
cin>>i;
cout<<endl<<"enter the name: ";
cin>>n;
if(g=='A'){
   head=insertatbegin(head,i,n,g);
}else if(g=='C'){
  head=insertatend(head,i,n,g);
}else{
  head=insertatpos(head,i,n,g);
}
cout<<endl<<"Printing Updated Linked List........."<<endl;
print(head);
}
