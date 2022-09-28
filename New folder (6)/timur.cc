    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long int
    #define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    void sol(){
        int n; cin>>n;
        string name; cin>>name;
        if(n!=5) {cout<<"NO"<<endl; return;}
        
        sort(name.begin(),name.end());
        (name=="Timru") ? cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
      
    int main(){
        fast;
        int t; cin>>t;
        while (t--){
            sol();
        }
        
    }