#include<bits/stdc++.h>
using namespace std;
int team=0;
int sol(vector<int> &v,int d){
 
        if(v.size()==1 && v[0]<d) return 0;
        int cnt=1;
        for(;;){
            if(v[0]*cnt>d){
                team++;
                break;
            }
            cnt++;
        }
        while(cnt--)  v.erase(v.begin());
        sol(v,d);
        return team;
}
void solve()
{
    int a,d;
    cin>>a>>d;
    int team;
    vector<int> v;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<>());
    int x= sol(v,d);
    cout<<x<<endl;
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}