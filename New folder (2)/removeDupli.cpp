#include<iostream>
#include<string>
using namespace std;

void removeDupli(string s){
    if (s.length()==1)
    {
        return;
    }
    if (s[0]==s[1])
    {
        removeDupli(s.substr(1));
    }else{
    cout<<s[0];
    removeDupli(s.substr(1));
    }
    
}
int main(){
    string number;
    cin>>number;
    removeDupli(number);
}