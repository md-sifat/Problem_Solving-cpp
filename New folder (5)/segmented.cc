#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int s,e;
    int n=e-s;
    cin>>s>>e;
    vector<int>nums(n);
    vector<int>prime(n+1 , true);
    for (int i = s; i < e; i++)
    {
        nums.push_back(i);
    }
    int cntr=0;
    for (int i = 0; i < n; i++)
    {
        if(prime[i]){
            cntr++;
            for (int j = i*2; j < n; j++)
            {
                
            }
            
        }
    }
    
    
}