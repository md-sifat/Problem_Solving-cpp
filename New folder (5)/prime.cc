#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n; cin>>n;
    vector<bool> prime(n+1 , true);
    prime[0] = prime [1] = false;
    int cntr=0;
    for (int i = 2; i < n; i++)
    {
        if(prime[i]){
            cntr++;
            for (int j = i*2; j < n; j+=i)
            {
                prime[j]=false;
            }
            
        }
    }
    cout<<cntr<<endl;
    
}