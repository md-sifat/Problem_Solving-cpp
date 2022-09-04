#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        
        int arr[n], max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > max)
                max = arr[i];
        }
        max++;
        int ar2[max];
        for (int i = 0; i < max; i++)
        {
            ar2[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            ar2[arr[i]]++;
        }
        int check = 0;
        for (int i = 0; i < max; i++)
        {
            if ((ar2[i] & 1) && ar2[i] != 1)
            {
                check = 1;
            }
        }

        if (check)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}