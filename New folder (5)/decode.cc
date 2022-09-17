#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol(){
    int n; string code;
    cin>>n>>code;
    for (int i = n-1; i >=0; i++)
    {
        if(i=='0'){
            string temp = code[i-1]+code[i-2];
        }
    }
    
}
int main(){
    int t; cin>>t;
    while (t--)
    {
        sol();
    }
    
}