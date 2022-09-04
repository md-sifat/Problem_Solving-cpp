#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[] , int n , int m, int mid){
    int sum = 0;
    int cntr = 1;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        if(sum>mid){
            cntr++;
            sum=arr[i];
            if(cntr>m || arr[i]>mid){
                return false;
            }
        }
    }
   
    return true;
    

}


int main()
{
    int n,m; cin>>n>>m;
    int arr[n];
    int e=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        e+=arr[i];
    }

    int s=0 , ans = -1;
    int mid = s + (e-s)/2;
    while (s<e)
    {
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }

    cout<<ans;
    
    
}