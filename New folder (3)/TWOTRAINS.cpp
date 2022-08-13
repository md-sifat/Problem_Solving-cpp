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
        cin >> n;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int ans = 0;

        int b = 0, a = 0, sA = 0, sB = 0, cntr = 0;
        while (1)
        {
            if (sA == n - 1)
            {
                break;
            }

            if (sB == sA)
            {
                cntr++;
            }

            if (sA > sB)
            {
                b++;
                if (b == arr[sB])
                {
                    sB++;
                    b = 0;
                }
            }

            a++;
            if (a == arr[sA])
            {
                sA++;
                a = 0;
            }
        }
        cout << sum + cntr << endl;
    }

    return 0;
}