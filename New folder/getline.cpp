#include<iostream>
using namespace std;
int main(){
    int n; cin>>n; char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    cout<<arr;
    
}