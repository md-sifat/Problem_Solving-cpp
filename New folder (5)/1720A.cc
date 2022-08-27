#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a , b ,c,d;
    cin>>a>>b>>c>>d;
    int cntr=0;
    while (1)
    {
        if(a/b == c/d)
        {
            break;
        }
        if ((a%b)==0 && (c%d)==0)
        {
            if(a/b > c/d)
            {
                cout<<(a/b % c/d)<<endl;
            }
            else
            {
                cout<<(c/d % a/b)<<endl;
            }
            
        }
        
    }
    
}