#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    unsigned ll a,b;
    cin>>a>>b;
    if(min(a,b)*2<max(a,b)) cout<<"NO\n";
    else if(((a+b)%2==0 && (a+b)%3==0) || (a+b)%3==0) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    // init();
    int t=1;
    cin>>t;
    while(t--) solve();
   return 0;
}