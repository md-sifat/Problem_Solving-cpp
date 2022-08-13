#include <iostream>
#include <string>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        // cin >> n;
        bool check = 0;
        for (int n = 0; n < 1000; n++)
        {
            check=0;
            for (int i = 1; i < n; i++)
            {
            for (int j = 1; j < n; j++)
            {
                if ((2 * i + 2 * j + i * j) == n)
                {
                    // cout<<i<<" "<<j<<endl;

                    check=1;
                }
            }
        }
        if (check)
        {
            

            cout<<n<<" ";
        }
        
        }
        
        // if (check)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }
}