#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cin>>name;
    int cntr=1,tmp=0;
    for (int i = 0; i < name.size(); i++)
    {
        if (name[i]==name[i+1])
        {
            cntr++;
            if(cntr>=7) break;
        }
        else  {
            cntr=1;
        }
        
    }
    if(cntr>=7) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
    
}