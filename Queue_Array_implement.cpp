#include <iostream>
using namespace std;
struct Queue{
int f,r,cap;
int *q;

Queue(int c){
cap = c;
f = 0;
r = -1;
q = new int [cap];
}
~Queue() { delete[] q; }

void Enqueue(int x){
if(r == cap-1){
    cout<<"Overflow"<<endl;
    return;
}else{
    q[++r]=x;
    cout<<"enqueueud "<<x<<endl;
}
}

int Dequeue(){
if(r == -1){
    cout<<"underflow"<<endl;
    return 0;
}else{
    int res = q[f];
for(int i=0;i<r ;i++){
    q[i]=q[i+1];}

r--;
return res;
}
}

void Display(){
if(f>r){
    cout<<"queue empty"<<endl;
}
for(int i = f ; i <= r ; i++){
    cout<<q[i]<<" ";
}
cout<<endl;
}

int Qfront(){
if(r == -1){
    cout<<"queue is empty"<<endl;
    return 0;
}else{
 return q[f];
}
}

bool isEmpty(){
return (f>r);
}

int Size(){
return r+1;
}

};

int main(){
Queue s(4);
s.Enqueue(20);
cout<<"dequeued "<<s.Dequeue()<<endl;
s.Enqueue(30);
s.Enqueue(40);
cout<<"dequeued "<<s.Dequeue()<<endl;
s.Enqueue(50);
s.Enqueue(60);

s.Display();

cout<<"size of queue is "<<s.Size()<<endl;

cout<<"front element is "<<s.Qfront()<<endl;

 cout << boolalpha;
cout<<"is queue empty? "<<s.isEmpty()<<endl;

cout<<"front element is "<<s.Qfront()<<endl;

}
