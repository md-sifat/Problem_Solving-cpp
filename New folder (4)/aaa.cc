#include<bits/stdc++.h>
const int n= 1e7+10;
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        int a,l=0;
        cin >> a;
        vector<int> v(a);
        for(int i=0;i<a;i++){
            int x;
            cin >> x;
            v.push_back(x);
            if(x>l) l =x;
        }
        int arr[l];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<l;i++){
            arr[v[i]]++;
        }
        sort(arr,arr+l,greater<>());
        if(arr[0]>abs(a-arr[0])) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}