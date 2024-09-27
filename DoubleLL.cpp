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

}
