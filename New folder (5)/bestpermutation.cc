#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol(){
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n-2; i++)
    {
        arr[i]=n-2-i;
    }
    arr[n-1]=n;
    arr[n-2]=n-1;
    if(n&1){
        swap(arr[0],arr[1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
}
int main(){
    int t; cin>>t;
    while (t--)
    {
        sol();
    }
    
}