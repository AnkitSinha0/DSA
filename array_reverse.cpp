#include <iostream>
using namespace std;
int main(){
int a[] = {1,2,3,4,5,6,7,8,9};
int s = sizeof(a)/sizeof(a[0]);
int start = 0;
int End = s - 1;
while(start < End){
    int temp = a[start];
    a[start] = a[End];
    a[End] = temp;
    start++;
    End--;
}
for(int i = 0 ; i < s ; i++){
    cout<<a[i]<<"  ";
}
}
