#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--)
    {
        int p; cin>>p;
        if ((p>10 && p<99) || p<0)
        {
            cout<<-1<<endl;
        }
        else if (p<=10)
        {
            cout<<p<<endl;
        }
        else if (p>100)
        {
            if (p%100>10-(p/100))
            {
                cout<<-1<<endl;
            }else{
                cout<<(p/100)+(p%100)<<endl;
            }
            
        }
        
        
        
    }
    
}