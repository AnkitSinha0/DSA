#include <iostream>
using namespace std;
void bubblesort(int a[],int n){
    bool swapped;
    for(int i = 0 ; i < n-1; i++){
        swapped = false;
        for(int j = 0 ; j < n-1-i ; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
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
bubblesort(arr,sz);
traverse(arr,sz);
}
