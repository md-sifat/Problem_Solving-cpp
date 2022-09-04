#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int team = (a + b) / 4;
        if (team > a)
        {
            team = a;
        }
        else if (team > b)
        {
            team = b;
        }
        cout<<team<<endl;
    }
}