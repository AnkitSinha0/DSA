#include <iostream>
using namespace std;


struct Stack{
    int top;
    int *a;
    int MAX;
    Stack(int c){
    MAX = c;
    a = new int[MAX];
    top = -1;
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    int Size();

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
int Stack::Size(){
return top+1;
}
int main(){
struct Stack s(5);
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(20);
cout<<endl<<s.pop()<<" popped from stack"<<endl;



}
