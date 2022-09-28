#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol()
{
    int n;
    cin>>n;
    if(n<4) cout<<-1<<endl;
    else {
        int x;
        if(n%2) x=(n/2)+1;
        else x=(n/2);
        vector<int> v,v1;
        for(int i=1;i<=n;i++){
            if(i<=x) v.push_back(i);
            else v1.push_back(i);
        }
        if(n!=4)
        for(int i=0;i<x;i++){
            if(i<v1.size())
            cout<<v[i]<<" "<<v1[i]<<" ";
            else 
            cout<<v[i];
        }
        else 
        {
            cout<<2<<" "<<4<<" "<<1<<" "<<3;
        }
        cout<<endl;
    }
    }
int main(){
    int t;
    cin>>t;
    while(t--) sol();
}