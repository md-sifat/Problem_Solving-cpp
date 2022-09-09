#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        long long int n; cin>>n;
        long long int arr[n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        long long int min = *min_element(arr , arr+n);
        long long int max = *max_element(arr , arr+n);
        long long int ans1,ans2;
        bool check=0;
        if(min<0){
            ans1 = min*max;
            if(min*min > max*max){
                check=1;
            }
        }
        else{
            ans1=min*min;
        }
        if(check){
            ans2 = min*min;
        }else{
        ans2=max*max;

        }
    
        

        cout<<ans1<<" "<<ans2<<endl;
        
    }
    
}