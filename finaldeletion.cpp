#include <iostream>
using namespace std;
int main(){
    int s;
    cout<<endl<<"enter size of array...";
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++){
    cout<<endl<<" enter.. ";
    cin>>a[i];
    }
    int ind;
    cout<<endl<<"enter the index of deletion...";
    cin>>ind;
    for(int k=ind;k<s-1;k++){
    a[k]=a[k+1];
    }
    cout<<endl<<"printing updated array..";
    for(int q=0;q<s-1;q++){
        cout<<endl<<a[q];
    }
}