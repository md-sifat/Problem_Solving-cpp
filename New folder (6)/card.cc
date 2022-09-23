#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        cout<<min(min(n,m),abs(m-n))<<endl;
    }
}