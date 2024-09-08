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
    int ind,val;
    cout<<endl<<"enter the index of insertion.. ";
    cin>>ind;
    cout<<endl<<"enter the value to inserted.. ";
    cin>>val;
    for(int i=size-1;i>=ind;i--){
        a[i+1]=a[i];
    }
    a[ind]=val;
    cout<<endl<<"printing new array..";
    for(int j=0;j<=size;j++)
    {
          cout<<endl<<"element number "<<j+1<<" is "<<a[j];
    }

}