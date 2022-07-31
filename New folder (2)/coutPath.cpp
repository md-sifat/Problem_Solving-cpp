#include<iostream>
#include<string>
using namespace std;
int coutPath(int a , int b)
{
    if (a==b)
    {
        return 1;
    }
    if (a>b)
    {
        return 0;
    }
    int cntr=0;
    for (int i = 1; i < 6; i++)
    {
        cntr += coutPath(a+i , b);
        
    }

    return cntr;
    
    
    
}
int main(){
    int s,e;
    cin>>s>>e;
    cout<<coutPath(s ,e)<<endl;
}