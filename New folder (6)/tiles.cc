#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void sol(){
    string name; cin>>name;
    string temp = name;
    sort(temp.begin()+1 , temp.end()-1);
    cout<<name;
    

}
int main(){
    fast;
    int t; cin>>t;
    while (t--){
        sol();
    }
    
}