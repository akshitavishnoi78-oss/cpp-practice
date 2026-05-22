#include<bits/stdc++.h>
using namespace std;
// arrays contain all elements of similar data types 
int main(){
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[4];
    arr[3]+=10; 
    cout<<arr[3]; 
    arr[0]=16; 
    cout<<arr[0]; 
    return 0; 
}
// 2d array 
int main(){
    int arr[3][5]; 
    arr[1][3]=78;
    cout<<arr[1][3];
    return 0; 
}