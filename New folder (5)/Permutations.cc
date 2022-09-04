#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    if(n<=4){
        cout<<"NO SOLUTION"<<endl;
    }
    for (int i = 1; i <= n; i++)
    {
        if(i&1){
            cout<<i<<" ";
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if(!(i&1)){
            cout<<i<<" ";
        }
    }
    
}