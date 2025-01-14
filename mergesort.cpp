#include <iostream>
using namespace std;
int Merge(int a[],int left,int mid ,int right){
   int n1 = mid - left + 1;
   int n2 = right - mid;

   int* L = new int[n1];
   int* R = new int[n2];

   for(int i=0 ; i < n1 ; i++){
    L[i] = a[left+i];
   } 
   for(int j=0 ; j < n2 ; j++){
    R[j] = a[mid+j+1];
   }

   int i=0,j=0,k=left;
       while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        }
        else {
            a[k] = R[j];
            j++;
 
        }
        k++;
    }
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;



}
void MS(int arr[],int left,int right){
if(left>=right){
    return;
}
int mid = (right+left)/2;
MS(arr,left,mid);
MS(arr,mid+1,right);
Merge(arr,left,mid,right);

}
void traverse(int arr[],int n){
for(int i = 0 ; i < n ; i++){
    cout<<arr[i]<<"  ";
}cout<<endl;}
int main(){

int arr[] = { 3,5,1,9,2 };

    int sz = sizeof(arr) / sizeof(arr[0]);
    traverse(arr,sz);
MS(arr,0,sz-1);
traverse(arr,sz);

}
