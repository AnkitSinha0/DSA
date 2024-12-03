#include <iostream>
using namespace std;
void ShellS(int arr[],int n){
    for(int gap = n/2 ; gap >= 1 ; gap/=2){
        for(int j = gap; j < n ; j++){
            for(int i = j - gap; i >= 0;i = i - gap ){
                if(arr[i+gap]>arr[i]){
                    break;
                }else{
                    swap(arr[gap+i],arr[i]);
                }
            }
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
int arr[] = {23,12,56,7,89,34,1};
int sz = sizeof(arr)/sizeof(arr[0]);
traverse(arr,sz);
ShellS(arr,sz);
traverse(arr,sz);

}


