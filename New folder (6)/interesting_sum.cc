#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    fast;
    int t; cin>>t;
    while (t--)
    {
    int n; cin>>n;
    vector<ll> vec(n);
    for(auto & i:vec) cin>>i;
    sort(vec.begin(),vec.end());
    ll ans = vec[n-1]-vec[0]+vec[n-2]-vec[1];
    cout<<ans<<endl;
    }
    

} 