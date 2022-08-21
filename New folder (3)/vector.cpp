#include<iostream>
#include<string>
#include<vector>
using namespace std;

void display( vector<int>  &vac)
{
    for (int i = 0; i < vac.size(); i++)
    {
        cout<<vac[i]<<' ';
    }
    
}

int main()
{
    vector<int> vec;

    int element , length;
    cin>>length;
    for (int i = 0; i < length; i++)
    {
        cin>>element;
        vec.push_back(element);
    }
    display(vec);
    return 0;
}