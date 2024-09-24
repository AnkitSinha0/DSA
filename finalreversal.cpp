#include <iostream>
using namespace std;
int main(){
    int a[100];
    int size;
    cout<<"enter no of elemnts you want: ";
    cin>>size;
    cout<<endl<<"input elements...";
    for(int i=0;i<size;i++){
        cout<<endl<<"enter element no "<<i+1<<" ";
        cin>>a[i];
    }

   int start=0, end=size-1;
   while(start<end){
    int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
   }
   for (int i = 0; i < size; i++) {
        cout<<endl << a[i] << " ";
    }


}