#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> arr;
    for(int i=0 ; i<n ; i++){
        int x; cin>>x;
        arr.push_back(x);
    }
    int s = 0;
    int e = n-1;
    while (s<e)
    {
        arr[s]=arr[s]^arr[e];
        arr[e]=arr[s]^arr[e];
        arr[s]=arr[s]^arr[e];
        s++;
        e--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr.at(i)<<" ";
    }
    
}