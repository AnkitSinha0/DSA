#include <iostream>
using namespace std;
struct Node{
int data;
Node* next;
Node(int d){
data=d;
next=NULL;}
};
struct Mystack{
Node *top;
int sz;
Mystack(){
top=NULL;
sz=0;}

void push(int x){
        Node* new_node = new Node(x); 
        new_node->next = top;         
        top = new_node;                
        sz++;                          
        cout << "Pushed " << x << " onto the stack.\n";
}

int pop(){
if(top==NULL){
    cout<<"StackUnderflow "<<endl;
    return -1;}
int res = top->data;
Node* temp = top;
top=top->next;
delete temp;
sz--;
return res;
}

int peek(){
if(top==NULL){
    cout<<"stack empty"<<endl;
    return -1;
}else{
return top->data;}
}

int Size(){
return sz;
}

bool isEmpty(){
return (top==NULL);
}
};
int main(){
Mystack s;

cout << "Element popped: " << s.pop() << "\n";
  cout << "Stack size: " << s.Size() << "\n";
  cout <<"Stack empty or not? "<<s.isEmpty()<<"\n";
  cout << "stack's top element: " << s.peek() << "\n";
}
