#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n; cin>>n;
    for (int i = 1; i <= n; i++){
        if(i==n){
            (i&1) ? cout<<"I hate it"  : cout<<"I love it";
            continue;
        }
        (i&1) ? cout<<"I hate that"  : cout<<"I love that";
        
        cout<<" ";
    }
    
}