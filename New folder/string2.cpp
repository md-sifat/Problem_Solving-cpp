#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string name="mynameissifat";
    transform(name.begin() , name.end(),name.begin(), ::toupper);
    cout<<name<<endl;
    transform(name.begin(),name.end(), name.begin() , ::tolower);
    cout<<name<<endl;
}