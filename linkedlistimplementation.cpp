//long implementation 
/*
#include <iostream>
using namespace std;
struct node{
  int data;
  struct node* next;
  node(int x){
  data = x;
  next =  NULL;
  }
};

int main(){
   node* head = new node(10);
   node* temp1 = new node(20);
   node* temp2 = new node(30);
   head->next=temp1;
   temp1->next=temp2;
   cout<<temp1->data;
   cout<<endl;
   cout<<temp1->next->data;
   cout<<endl;
   cout<<head->next->next->data;
}

*/
//short hand implementation or cleaner version
/*
#include <iostream>
using namespace std;
struct node{
  int data;
  struct node* next;
  node(int x){
  data = x;
  next =  NULL;
  }
};

int main(){
   node* head = new node(10);
   head->next = new node(20);
   head->next->next =  new node(30);

   cout<<head->next->data;

}
*/

