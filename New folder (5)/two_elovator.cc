#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol(){
    ll a,b,c;
    cin>>a>>b>>c;
    int runa,runb;
    runa = a-1;
    if(b<c) runb=(c-1)+(c-b); else runb = b-1;
    // cout<<runa<<" "<<runb;
    if(runa>runb)cout<<2<<endl;
    if(runa<runb)cout<<1<<endl;
    if(runa==runb)cout<<3<<endl;

}
int main(){
    int tc; cin>>tc;
    while (tc--)
    {
        sol();
    }
    
}