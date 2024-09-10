#include <iostream>
using namespace std;
int main(){
   int s1,s2,s3;
   cout<<endl<<"enter size of array 1 ";
   cin>>s1;
   cout<<endl<<"enter size of array 2 ";
   cin>>s2;
   int a[s1];
   int b[s2];
for(int i=0;i<s1;i++){
        cout<<endl<<"enter element no "<<i+1<<" ";
        cin>>a[i];
    }
for(int i=0;i<s2;i++){
        cout<<endl<<"enter element no "<<i+1<<" ";
        cin>>b[i];
    }
    //size of 3 array would be size of a1 plus a2
    s3=s1+s2;
    int c[s3];
    for(int i=0;i<s1;i++){
        c[i]=a[i];
    }

    for(int i=0;i<s3;i++){
        c[i+s2]=b[i];

    }
     for(int i=0;i<s3;i++){
        cout<<endl<<c[i];
    }
}
