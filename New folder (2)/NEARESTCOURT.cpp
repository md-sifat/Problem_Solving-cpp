#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        int ans=round(abs(x-y)/2);
        cout<<ans<<endl;
    }
    
}