#include <bits/stdc++.h>
using namespace std;

void print_vec( vector<pair<int,int>> &vec )
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
    
}

int main()
{
    vector<pair<int, int>> vec;
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x,y; cin>>x>>y;
        vec.push_back({x,y});
    }
    print_vec(vec);
    
}