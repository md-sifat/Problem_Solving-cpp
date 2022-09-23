#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol(){
    int n; cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(j==0 || j==(i-1)){
                cout<<1<<" ";
            }else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
        
    }
    
}
int main(){
    int t; cin>>t;
    while (t--)
    {
        sol();
    }
    
}