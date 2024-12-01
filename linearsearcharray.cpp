#include <iostream>
using namespace std;
int searching(int arr[],int n,int x){
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;



}
int main(){
    int arr[] = {1,2,3,4};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int val = searching(arr,sz,9);
    cout<<val;


}
