#include <iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i = 0 ; i  < n - 1; i++){
        int min_cur = i;
        for(int j = i + 1; j < n;j++){
            if(arr[j]<arr[min_cur]){
                min_cur = j;
            }
        }
                swap(arr[i], arr[min_cur]);
    }   


}
void traverse(int arr[],int n){
for(int i = 0 ; i < n ; i++){
    cout<<arr[i]<<"  ";
}
cout<<endl;
}
int main(){
int arr[] = {3,5,1,9,2};
int sz = sizeof(arr)/sizeof(arr[0]);
traverse(arr,sz);
selectionsort(arr,sz);
traverse(arr,sz);
}
