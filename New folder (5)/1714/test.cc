#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n; cin>>n;
    vector<string> vec1;
    for (int i = 0; i < n; i++){
        string name; cin>>name;
        vec1.push_back(name);
    }
    string key; cin>>key;
    cout<<count(vec1.begin(), vec1.end(), key);
}