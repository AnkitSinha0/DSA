#include <iostream>
using namespace std;
void deletion(int arr[], int &n,int pos){
for(int i = pos ; i < n-1 ; i++){
arr[i] = arr[i+1];
}
n--;
}
void traversal(int arr[],int n){
    if(n <= 0){
        return;
    }
    traversal(arr,n-1);
    cout<<arr[n-1]<<endl;


}
int main(){
int Max= 100;
int arr[Max]= {12,3,45,6,7};
int s = sizeof(arr)/sizeof(arr[0]);
cout<<s;
traversal(arr,s);
deletion(arr,s,2);
traversal(arr,s);




}
