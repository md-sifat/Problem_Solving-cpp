#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t; cin>>t;
    while (t--)
    {
        ll n; cin>>n;
        ll arr[n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        ll min = *min_element(arr , arr+n);
        ll Max = *max_element(arr , arr+n);
        ll ans1,ans2;
        bool check=0;
        if(min<0){
            ans1 = min*Max;
            ans2=max(min*min , Max*Max);
            
        }
        else{
            ans1=min*min;
            ans2=Max*Max;
        }

        cout<<ans1<<" "<<ans2<<endl;
        
    }
    
}