#include<iostream>
using namespace std;
int sum=0;
int powr(int n,int p){
    if(p==0){
        return 1;}
    
    return n * powr(n,p-1);
}

int main(){ 
    int n,a;
    cin>>n>>a;
    cout<<powr(n,a)<<endl;

}