#include<iostream>
using namespace std;

void solution(){
    int n; cin>>n;
    char arr[n-1];
    for (int i = 0; i < n-2; i++)
    {
        cin>>arr[i];
    }
    int cntr=0;
    
    if (arr[0]=='1')
    {
        cntr++;
    }
    if (arr[n-2]=='0')
    {
        cntr++;
    }
    for (int i = 0; i < n-2; i++)
    {
        if (arr[i]=='0' && arr[i+1]=='1')
        {
            cntr++;
        }
        
    }
    
    cout<<cntr<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solution();
    
    
}