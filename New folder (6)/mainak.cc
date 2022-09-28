#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol(){
    int n; cin>>n;
    vector<int> vec(n);
    for(auto & i:vec) cin>>i; 
    int ans = vec[n-1]-vec[0];
    for (int i = 1; i < n; i++){
        ans = max(ans , vec[i]-vec[0]);
    }
    for (int i = 0; i <= n-2; i++){
        ans = max(ans , vec[n-1]-vec[i]);   
    }
    for (int i = 1; i <= n-1; i++){
        ans = max(ans , vec[i-1]-vec[i]);
    }
    cout<<ans<<endl;   
}
int main(){
    int t; cin>>t;
    while (t--){
        sol();
    }
    
}