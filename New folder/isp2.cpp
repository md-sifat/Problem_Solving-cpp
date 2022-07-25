#include<iostream>
using namespace std;
bool istrue(int n){
    return !(n & n-1);
}
int main(){
    int n; cin>>n;
    cout<<istrue(n);
}