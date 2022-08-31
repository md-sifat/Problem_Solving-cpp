#include<bits/stdc++.h>
using namespace std;

int getpivot(int arr[] , int n)
{
    int start = 0 , end = n-1;
    int mid = start + (end-start)/2;
    while (start<end)
    {
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }

        mid = start + (end-start)/2;
    }
    return start;
    
}

int main()
{
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The Pivot of the array is : "<<getpivot(arr , n);
    
}