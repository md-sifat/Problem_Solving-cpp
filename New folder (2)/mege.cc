#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    vector<int> name;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        name.push_back(x);
    }
    name.pop_back(name.begins() , name.begins+5);
    
}