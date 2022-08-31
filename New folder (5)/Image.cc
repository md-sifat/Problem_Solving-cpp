#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        char a,b,c,d;
        cin>>a>>b>>c>>d;
        if (a!=b && b!=c && c!=d && d!=a && a!=c && b!=d)
        {
            cout<<3<<endl;
            continue;
        }
        if (a==b && b==c && c==d)
        {
            cout<<0<<endl;
            continue;
        }
        if (a==b && b==c && c!=d)
        {
            cout<<1<<endl;
            continue;
        }
        if (a==b && b!=c && b==d)
        {
            cout<<1<<endl;
            continue;
        }
        if (a!=b && b==c && c==d)
        {
            cout<<1<<endl;
            continue;
        }
        if (a==c && b!=c && c==d)
        {
            cout<<1<<endl;
            continue;
        }
        if ((a==b && d==c) || (a==c && d==b)  || (a==d && b==c))
        {
            cout<<1<<endl;
            continue;;
        }
        if ((a==b && d!=c) || (a!=b && d==c) || (a==c && d!=b) || (a!=c && d==b) || (a!=d && b==c) || (a==d && b!=c))
        {
            cout<<2<<endl;
            continue;;
        }
        
    }
    
}