#include <iostream>
using namespace std;
void traverse(int arr[], int N){
    if(N <= 0){
        return;
    }
    traverse(arr,N-1);
    cout<<arr[N-1]<<endl;


}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    traverse(arr,n);

}
