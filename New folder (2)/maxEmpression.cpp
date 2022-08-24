#include<iostream>
#include<string>
#define max 32
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int temp=0;
    for (int i = max; i >= 0; i--)
    {
        int y=(1<<i);
        int x = b & y;
        // cout<<x<<endl;
        cout<<y<<" ";
    }
    

    
}