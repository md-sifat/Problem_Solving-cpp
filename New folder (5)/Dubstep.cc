#include<bits/stdc++.h>
using namespace std;
int main(){
    string name; cin>>name;
    int cntr =0;
    for (int i = 0; i < name.size(); i++)
    {
        if(name[i]=='W' && name[i+1]=='U' && name[i+2]=='B')
        {
            i+=2;
            // cout<<" ";
            continue;
    

        }
        if (name[i-3]=='W' && name[i-2]=='U' && name[i-1]=='B' && cntr==1 )
        {
            cout<<" ";
        }
        cout<<name[i];
        cntr=1;
    }
    
}   