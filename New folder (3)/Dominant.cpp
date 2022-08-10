#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        
        int cntr=0,temp=0;
        bool check=false;
        for (int i = 0; i < n-1; i++)
        { 
            if (arr[i]==arr[i+1])
            {
                cntr++;
                check=true;
            }
            else{
                if (cntr==temp)
                {
                    check=false;
                }
                temp=cntr;
                cntr=0;
            }
               
        }
        if (check)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
         
    }
    
}