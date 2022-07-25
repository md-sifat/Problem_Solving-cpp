#include<iostream>
using namespace std;
bool isSort(int array[] , int n){
    if (n==1)
    {
        return true;
    }
    
    return (isSort(array+1 , n-1) && array[0]<array[1]);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<isSort(arr,n);
    
}