#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void sol(){
    int n; cin>>n;
    string bi; cin>>bi;
    vector<int> s,temp;
    for (int i = 1; i <= n; i++){
        s.push_back(i);
    }
    for (int i = 0; i < n; i++){
        if(bi[i]=='0'){
            temp.push_back(i+1);
        }
    }
    int ans=0;
    for (int i = 0; i < temp.size(); i++)
    {
        ans +=temp[i];
        if(find(temp.begin(), temp.end(), 2*temp[i])!=temp.end()){
            ans +=temp[i];
            temp[find(temp.begin(), temp.end(), 2*temp[i])!=temp.end()]+=(1/2);
        }
        
        
    }
    cout<<ans<<endl;
    
    
    
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        sol();
    }
    
}