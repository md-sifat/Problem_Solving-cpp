#include<bits/stdc++.h>
using namespace std;

int firstO(int arr[] , int size , int key)
{
    int start = 0 , end = size-1 ;
    int mid = start + (end - start)/2;
    int ans = -1;
    while (start<=end)
    {
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        if(key<arr[mid]){
            end = mid -1;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
    
}

int lastO(int arr[] , int size , int key)
{
    int start = 0 , end = size-1 ;
    int mid = start + (end - start)/2;
    int ans = -1;
    while (start<=end)
    {
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        if(key<arr[mid]){
            end = mid -1;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
    
}


int main()
{
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Key: ";
    int key; cin>>key;
    cout<<"First Accurace at index: "<<firstO(arr , n , key)<<endl;
    cout<<"Last Accurace at index: "<<lastO(arr , n , key)<<endl;
    
}