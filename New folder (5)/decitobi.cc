#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int ans=0;
    int i = 0;
    while (n!=0)
    {
        ans = ans + pow(10,i)*( n & 1);
        i++;
        n = n>>1;
    }
    cout<<ans;
    
}
