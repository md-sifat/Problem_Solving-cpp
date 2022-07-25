#include<iostream>
using namespace std;
string reverse(string s){

    if (s.length()==0)
    {
        return s;
    }
    return reverse(s.substr(1))+s[0];
    
}
int main(){
    string name;
    cin>>name;
    cout<<reverse(name);
}