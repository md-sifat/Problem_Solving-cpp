#include<bits/stdc++.h>
using namespace std;

 void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int i =n-k;
        vector<int> ans;
       for (int j=0 ; j < n; j++)
       {
            if(i==n){
                i=0;
            }
            ans.push_back(nums[i]);
            i++;
       }
        nums = ans;
      
       
       
    }

int main()
{
    vector<int> nums = {-1, -100 , 3 , 99};
    int n = nums.size();
    rotate(nums , 2);
    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
    
    

    return 0;
}