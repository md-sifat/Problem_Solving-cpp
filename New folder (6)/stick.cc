#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol(){
    int n; cin>>n;
    vector<ll> vec(n);
    for(auto & i:vec) cin>>i;
    sort(vec.begin(),vec.end());
    int ans=1000000009;
    for (int i = 0; i < n-2; i++){
        int Min=vec[i+2]-vec[i];
        ans=min(ans,Min);
        
    }
    cout<<ans<<endl;

}
int main(){
    int t; cin>>t;
    while (t--){
        sol();
    }
    

}