#include<bits/stdc++.h>
using namespace std;

int binaryS(int arr[] , int size , int key)
{
    int start = 0 , end = size-1;
    int mid = (start+end)/2;
    int ans = -1;
    while (start<end)
    {
        if(key==arr[mid]){
            ans =  mid;
            end = mid-1;
        }
        if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
        mid = (start + end)/2;
        
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
    cout<<"KEY: ";
    int key; cin>>key;
    cout<<binaryS(arr , n , key);
    
}