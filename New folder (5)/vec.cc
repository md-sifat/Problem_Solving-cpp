#include<bits/stdc++.h>
using namespace std;

void print_vec( vector<int> &vec )
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    
}

int main()
{
    vector <int> vec;
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        vec.push_back(x);

    }
    vector<int> &vec2 = vec;
    
    vec.push_back(45);

    print_vec(vec);
    cout<<endl;
    print_vec(vec2);
    
}