#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol(){
 int n; cin>>n; vector<int> arr;
    for (int i = 0; i < n; i++){
        int x; cin>>x; arr.push_back(x);
    }
    cout<<max_element(arr.begin(), arr.end()) - arr.begin() +1<<endl; 
}
int main(){
    int t; cin>>t;
    while (t--){
        sol();
    } 
}