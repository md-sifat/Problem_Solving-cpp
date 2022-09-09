#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        long long int arr[n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        sort(arr , arr+n);
        long long int cntr=1,ans=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==arr[i+1]){
                cntr++;
            }
            else if(cntr!=1){
                ans += ((cntr)*(cntr-1))/2;
                cntr=1;
            }else{
                cntr=1;
            }
            
        }  
        cout<<ans<<endl;
    }
    
}