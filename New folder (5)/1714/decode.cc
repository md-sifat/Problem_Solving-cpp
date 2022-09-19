#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main(){
    int t; cin>>t;
    while (t--)
    {
    int n; cin>>n;
    string code; cin>>code;
    vector<int> vec;
    string ans;
    for (int i = 0; i < n; i++){
        int x = ((int)code[i]-48);
        vec.push_back(x);
    }
    for (int i = n-1; i >= 0; i--)
    {
        if(vec[i]!=0){
            char temp = (char) (vec[i]+96);
            ans.push_back(temp);
        }else{
            char temp = (char) (vec[i-1]+vec[i-2]*10+96);
            ans.push_back(temp);
            i-=2;
        }
    }
    
    reverseStr(ans);
    cout<<ans<<endl;
    }
    
    
}
