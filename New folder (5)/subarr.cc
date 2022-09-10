#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution(){
    ll n; cin>>n;
    vector<ll> pos,neg;
    for (int i = 0; i < n; i++){
        ll x; cin>>x;
        if(x<0){
            neg.push_back(x);
        }else{
            pos.push_back(x);
        }
    }
    sort(pos.begin() , pos.end());
    sort(neg.begin() , neg.end());
    if(neg.size()==0){
        cout<<pos[0]*pos[0]<<" "<<pos[pos.size()-1]*pos[pos.size()-1]<<endl;;
    }
    else if(pos.size()==0){
        cout<<neg[neg.size()-1]*neg[neg.size()-1]<<" "<<neg[0]*neg[0]<<endl;;
    }else if(abs(neg[0]>pos[pos.size()-1])){
        cout<<neg[0]*pos[pos.size()-1]<<" "<<neg[0]*neg[0]<<endl;
    }else{
        cout<<neg[0]*pos[pos.size()-1]<<" "<<pos[pos.size()-1]*pos[pos.size()-1]<<endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while (t--){
        solution();
    }
    return 0;
}