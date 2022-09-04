#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ; cin>>n;
    vector<int> vec(n);
    for(int i:vec){
        cin>>vec[i];
    }
    for(int i:vec){
        cout<<vec[i]<<" ";
    }
}