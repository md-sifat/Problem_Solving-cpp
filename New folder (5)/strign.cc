#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
        char arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
	    int tm = (n-k)+1;
	    cout<<pow(2,tm)<<endl;
	}
	return 0;
}
