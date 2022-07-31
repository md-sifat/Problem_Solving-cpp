#include<iostream>
#include<string>
using namespace std;
void parmu(string s , string ans){
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        string ros=s.substr(0 , i)+ s.substr(i+1);
        parmu(ros , ans+s[i]);
    }
    
    
}
int main(){
    string name; cin>>name;
    parmu(name , "");
}