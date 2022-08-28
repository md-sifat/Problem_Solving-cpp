#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name; cin>>name;
    vector <char> vec;
    for (int i = 0; i < name.size(); i++)
    {
        vec.push_back(name[i]);
    }
    int size = vec.size();
    for (int i = 0; i < size; i++)
    {
        if(vec.at(i)=='*')
        {
            vec.erase (vec.begin()+i);
        }
    }
     for (int i = 0; i < size; i++)
    {
        cout<<vec.at(i);
    }
    
    

    

}