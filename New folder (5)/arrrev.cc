#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if(n%2){
        n--;
    }
    for (int i = 0; i < n; i+=2)
    {
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
     if(n%2){
        n++;
    }
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    
}