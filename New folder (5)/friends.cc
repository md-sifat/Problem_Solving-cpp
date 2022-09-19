#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void sol()
{

    int n;
    cin >> n;
    vector<ll> vec1, vec2 , diff;
    for (int i = 0; i < n; i++){
        int x; cin>>x;
        vec1.push_back(x);
    }
    for (int i = 0; i < n; i++){
        int x; cin>>x;
        vec2.push_back(x);
    }
    for (int i = 0; i < n; i++){
        int x=vec2[i]-vec1[i];
        diff.push_back(x);
    }
    sort(diff.begin(), diff.end(), greater<int>());
    ll s =0 , e=n-1;
    int cntr=0;
    while (s<e)
    {
        if(diff[s]+diff[e]>=0){
            cntr++;
            s++; e--;
        }
        else{
            e--;
        }
    }
    cout<<cntr<<endl;
    
    
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
}