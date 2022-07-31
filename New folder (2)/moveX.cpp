#include<iostream>
#include<string>
using namespace std;

string removeX(string s){
    if (s.length()==0)
    {
        return "";
    }
    if (s[0]=='x')
    {
        return removeX(s.substr(1)) + s[0];
    }
    else
    {
        return s[0]+removeX(s.substr(1));
    }
    
    
    
}
int main(){
    string name;
    cin>>name;
    cout<<removeX(name);
}