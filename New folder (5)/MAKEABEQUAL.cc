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
        long long int arA[n], arB[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arA[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arB[i];
        }
         long long int cntr1 = 0, cntr2 = 0;
        for (int i = 0; i < n; i++)
        {
            if(arA[i]>arB[i]){
                
                cntr2 += (arA[i] - arB[i]);
            }
            else if(arB[i]>arA[i]){
                 cntr1 += (arB[i] - arA[i]);
            }
        }

       
        // cout<<cntr1<<" "<<cntr2;
        if (cntr1 == cntr2)
        {
            cout << cntr1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}