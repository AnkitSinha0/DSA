#include <iostream>
using namespace std;
#define MAX 5

class Stack{
int top;
public:
    int a[MAX];
    Stack(){top =-1;}
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();

};
bool Stack::push(int x){
if(top>=(MAX-1)){
   cout<<"stack overflow!!"<<endl;
   return false;}
   else{
    a[++top]=x;
    cout<< x <<" pushed onto stack"<<endl;
    return true;
   }
}
int Stack::pop(){
if(top<0){
    cout<<"stack underflow!!"<<endl;
    return 0;
}
else{
    int x = a[top--];
    return x;
}
}
int Stack::peek(){
if(top<0){
    cout<<"stack is empty"<<endl;
}else{
 int x = a[top];
 return x;
}
}
bool Stack::isEmpty(){
return (top < 0);
}
int main(){
class Stack s;


cout<<endl<<s.pop()<<" popped from stack"<<endl;

while(!s.isEmpty()){
    cout<<s.peek()<<" ";
    s.pop();
}
}
