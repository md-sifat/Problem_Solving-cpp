#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n; cin>>n;
    if(n>0){ cout<<n<<endl; return 0;}
    string name = to_string(n);
    int x =name.size();
    if((x==2 || x==3) && name[2]=='0') {
        name.erase(name.begin());
        
    }
    x =name.size();
    for (int i = 0; i < x; i++)
    {
        if (name[x-1]>name[x-2])
        {
            if(x-1 ==i) continue;

        }
        else  {
            if(x-2 == i) continue;
        }
        cout<<name[i];
        
    }
    cout<<endl;
    

}