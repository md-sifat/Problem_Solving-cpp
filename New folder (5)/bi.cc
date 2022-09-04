#include<bits/stdc++.h>
using namespace std;

int biSearch(vector<int>& nums, int start , int end , int target){
        int s = start;
            int e = end;

            int mid = s + (e-s)/2;
            while(s<=e){
                 if(nums[mid]==target){
                    return mid;
                 }
                if(nums[mid]<target){
                    s=mid+1;
                }
                else if(nums[mid]>target){
                    e = mid-1;
                }
                mid  = s +(e-s)/2;
            }
        return -1;
    }

int main()
{
    int n; cin>>n;
    int k; cin>>k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int k; cin>>k;
        arr.push_back(k);
    }
    cout<<biSearch(arr , 0 , n-1 , k);
    
}