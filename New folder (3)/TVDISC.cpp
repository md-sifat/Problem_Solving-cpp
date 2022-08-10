#include<iostream>
#include<string>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--)
    {
        int a,b,ax,bx;
        cin>>a>>b>>ax>>bx;
        if ((a-ax)<(b-bx))
        {
            cout<<"First"<<endl;
        }
        else if ((a-ax)==(b-bx))
        {
            cout<<"Any"<<endl;
        }
        else
        {
            cout<<"Second"<<endl;
        }
        
    }
    return 0;
    
}