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
        string bi;
        int min = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > min)
            {
                min = arr[i];
            }
        }
        cin >> bi;
        for (int i = 0; i < n; i++)
        {
            if (bi[i] == '0' && arr[i] < min)
            {
                min = arr[i];
            }
        }
        cout << min << endl;
    }
    return 0;
}