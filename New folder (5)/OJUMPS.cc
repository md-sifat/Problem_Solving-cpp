#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a; cin>>a;
    if (a==0 || a==1){
        cout<<"yes"<<endl; 
    }
    else if(a%6==0 || a%6==1){
        cout<<"yes"<<endl;
    }
    else if(a%3==0 && (a/3)&1){
        cout<<"yes"<<endl;
    }
    
    else{
        cout<<"no"<<endl;
    }
    return 0;
    
}