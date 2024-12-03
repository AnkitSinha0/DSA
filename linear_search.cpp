#include <iostream>
using namespace std;
int linearS(int arr[],int key,int n){
for(int i=0; i < n ; i++){
    if(arr[i] == key){
        return i;
    }
}
return -1;
}
int main(){
    int arr[] = {12,45,6,78,99,69,23};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int res = linearS(arr,7,sz);
    if(res == -1){
        cout<<"not found"<<endl;
    }else{
        cout<<"found at "<<res<<endl;
    }


}
