#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol(){
    ll n; cin>>n;
    ll part1 = (n/3), part3=(n-(n/2)),  part2 = (n-part3-part1);
    cout<<part1*5+part2*3+part3<<endl;
}
int main(){
    int t; cin>>t;
    while (t--){
        sol();
    }
    return 0;
}