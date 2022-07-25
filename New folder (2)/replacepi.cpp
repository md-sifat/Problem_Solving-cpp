#include<iostream>
using namespace std;

string replacePi(string s){
    if (s.length()==0)
    {
        return s;
    }
    if (s[0]=='p' && s[1]=='i')
    {
        s[0]='3.';
        s[1]='14';
    }
    
    
}

int main(){
    string name;
    cin>>name;
}