#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a != b && b != c && c != d)
    {
        cout << 3 << endl;
        return 0;
    }
    if (a == b && b == c && c == d)
    {
        cout << 0 << endl;
        return 0;
    }

    int eq = 0;
    if (a == b)
        eq++;
    if (b == c)
        eq++;
    if (c == d)
        eq++;
}