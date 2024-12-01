#include <iostream>
using namespace std;
void insertion(int arr[],int &n, int pos , int x){

for(int i = n ; i > pos ; i--){
    arr[i] = arr[i-1];
}
arr[pos] = x;
n++;
}
void display(int arr[],int n){
for(int i = 0; i < n ; i++){
    cout<<arr[i]<<endl;
}
}
int main(){
int cap = 100;
int arr[cap] = {1,2,3,4,5};
int sz = 5;
display(arr,sz);
insertion(arr,sz,2,69);
display(arr,sz);

}
