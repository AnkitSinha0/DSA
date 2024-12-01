#include <iostream>
using namespace std;
int main(){
int arr1[] = {1,2,3,4,5};
int arr2[] = {6,7,8,9,10,11,12};
int s1 = sizeof(arr1)/sizeof(arr1[0]);
int s2 = sizeof(arr2)/sizeof(arr2[0]);

int arr3[s1+s2];

for(int i = 0 ; i < s1 ; i++){
    arr3[i] = arr1[i];
}
for(int i = 0 ; i < s2 ; i++){
    arr3[i+s1] = arr2[i];


}

for(int i = 0 ; i < s1+s2 ; i++){
    cout<<arr3[i]<<" ";
}
}
