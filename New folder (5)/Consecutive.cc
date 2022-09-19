#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol(){
    int n,k; cin>>n>>k;
    vector<ll> vec;
    for (int i = 0; i < n; i++){
        int x; cin>>x;
        vec.push_back(x);
    }
    ll sum=0;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(i%k==j%k){
                swap(vec[i],vec[j]);
            
            }
        }
        for (int i = 0; i < n-k+1; i++)
        {
            ll x=0;
            for (int j = i; j < k+i; j++)
            {
                x+=vec[j];
            }
            if(x>sum){
                swap(x,sum);
            }
            
        }
        
    }
    cout<<sum<<endl;
    

    
}
int main(){
    int t; cin>>t;
    while (t--)
    {
        sol();
    }
    
}