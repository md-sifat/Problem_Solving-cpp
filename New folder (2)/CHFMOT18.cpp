#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> s >> n;
        if (s < n)
        {
            if (s % 2 == 0 || s==1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        if (s == n)
        {
            cout << 1 << endl;
        }
        if (s > n)
        {
            if (s % n == 0)
            {
                cout << s / n << endl;
            }
            else if ((s%n)%2==0)
            {
                cout<< (s/n)+1;
            }
            else if ((s%n)%2!=0)
            {
                cout<<(s/n)+2;
            }   
        }
    }
}