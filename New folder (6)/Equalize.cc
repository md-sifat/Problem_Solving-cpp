#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol(){
    ll a,b,x; cin>>a>>b>>x;
    if((a+b)&1){
        cout<<"NO"<<endl; 
        return;
    }
    
    if((abs(a-b)/2)%x==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    
}
int main(){
   int t; cin>>t;
   while (t--)
   {
        sol();
   }
   return 0;
    
}