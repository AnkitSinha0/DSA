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
s3=s1+s2;
int c[s3];
int l=0 , m =0 , k= 0;

while(l < s1 && m < s2){
    if(a[l]<b[m]){
        c[k++]=a[l++];
    }else{
        c[k++]=b[m++];
    }
}
while(l<s1){
    c[k++]=a[l++];
}
while(m<s2){
    c[k++]=b[m++];
}
for(int i=0;i<s3;i++){
        cout<<endl<<"element no "<<i+1<<" is "<<c[i];

}


}
