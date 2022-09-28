#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void sol(){
    int n,m,sx,sy,d;
    cin>>n>>m>>sx>>sy>>d;
    if((sx+d<n && sy-d>1)  || (sx-d>1 && sy+d<m )){
        cout<<(m-1)+(n-1)<<endl;
    }else{
        cout<<-1<<endl;
    }
}

int main(){
   fast;
   int t; cin>>t;
   while (t--){
    sol();
   }
   
}