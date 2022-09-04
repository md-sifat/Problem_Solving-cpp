#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string col1, col2;
        cin >> n >> col1 >> col2;
        bool check = true;
        for (int i = 0; i < n; i++)
        {
            if ((col1[i] == 'R' && col2[i] != 'R') || (col2[i] == 'R' && col1[i] != 'R'))
            {
                check = false;
            }
        }
        if (check)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}