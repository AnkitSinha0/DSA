#include <iostream>
using namespace std;
int main(){
int a[] = {1,3,5,7,9};
int b[] = {2,4,6,8,10};
int s1 = sizeof(a)/sizeof(a[0]);
int s2 = sizeof(b)/sizeof(b[0]);
int c[s1+s2];
int i = 0 , j = 0 , k = 0;

while(i < s1 && j < s2){
    if(a[i] < b[j]){
        c[k] = a[i];
        k++;
        i++;
    }else{
        c[k] = b[j];
        k++;
        j++;
    }
}

while(i < s1){
    c[k] = a[i];
    k++;
    i++;
}

while(j < s2){
    c[k] = b[j];
    k++;
    j++;
}

for(int i = 0 ; i < s1+s2 ; i++){
    cout<<c[i]<<"  ";
}



}
