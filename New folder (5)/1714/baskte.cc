#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,d; cin>>n>>d;
    vector<int> vec;
    for (int i = 0; i < n; i++){
        int x; cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    vector<int> temp;
    temp = vec;
    int cntr=1,i=n-1,ans=0;
    while (cntr<=n)
    {
        if(vec[i]>d){
            ans++;cntr++;
            i--;
        }else{
            cntr++;vec[i]+=temp[i];
        }
    }
    cout<<ans<<endl;
    
    
}