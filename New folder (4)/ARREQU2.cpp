#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int &i:arr) cin >> i;
        sort(arr , arr+n);
        int cntr=0,maxd=1;
        for(int &i:arr){
            if(i==i+i) cntr++;
            else{
                maxd=max(maxd,cntr);
                cntr=0;
            }
        }
        maxd++;
        if (maxd <= (n-maxd)+1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}