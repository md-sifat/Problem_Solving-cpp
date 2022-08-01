#include <iostream>
#include <string>
#include<algorithm>
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int gcdS=arr[0];
        for (int i = 1; i < n; i++)
        {
            gcdS=__gcd(gcdS , arr[i]);
        }
        cout<<gcdS<<endl;
       
    }
}