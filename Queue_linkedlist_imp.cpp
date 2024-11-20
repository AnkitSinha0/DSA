#include <iostream>
using namespace std;
struct node{
int data;
node* next;
node(int d){
data = d;
next = NULL;}
};

struct Queue{
node* front, *rear;
int sz;
Queue(){front = NULL; rear=NULL;sz=0;}

void enqueue(int x){
  node* new_node = new node(x);
  if(front==NULL){
    front = rear = new_node ;
    cout<<"enqueued "<<x<<endl;
    sz++;
    return;
  }rear->next = new_node;
  rear = new_node;
  cout<<"enqueued "<<x<<endl;
  sz++;
}


void dequeue(){
  if(front == NULL){
        cout<<"underflow"<<endl;
        return;}
  int res  = front->data;
  node *temp = front;
  front = front->next;
  if(front == NULL){rear = NULL;}
  delete temp;
  cout<<"dequeued "<<res<<endl;
  sz--;

}

bool isempty(){
return (front==NULL);
}

int getfront(){
if(isempty()){
    cout << "Queue is empty\n";
    return 0;
}return front->data;
}

int getrear(){
if(isempty()){
    cout << "Queue is empty\n";
    return 0;
} return rear->data;
}
int Size(){
return sz;
}
};

int main(){
Queue s;
s.enqueue(10);
s.enqueue(20);
s.enqueue(30);


cout<<"size is "<<s.Size()<<endl;

s.dequeue();
cout<<"front is "<<s.getfront()<<endl;
s.dequeue();
s.dequeue();
s.dequeue();

cout<<"size is "<<s.Size()<<endl;



}
