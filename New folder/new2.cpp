#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int cntr=0;
    while (1)
    {
        cntr++;
        if ((n & n-1)==0)
        {
            break;
        }
        n=n & n-1;
        
    }
    cout<<cntr<<endl;
    
}