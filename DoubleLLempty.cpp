#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;

};
node* createnode(int x){
    node* newnode = new node();
    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}
int main(){
  node* head = NULL;
  head=createnode(23);
  cout<<head->data;
}