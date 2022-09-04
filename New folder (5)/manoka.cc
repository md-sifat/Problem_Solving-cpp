#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int n)
{
    for (long long int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    long long int n;
    cin >> n;
    long long int cntr = 0;
    for (long long int i = 1; i <= n; i++)
    {
        if (isPrime(i) && i!=3 && i!=2)
        {
            cntr++;
        }
        else if (i & 1)
        {
            cntr += 3;
        }
        else if (!(i & 1) && i % 3 == 0)
        {
            cntr += 5;
        }
        else
        {
            cntr += 3;
        }
    }
    cout << cntr<<endl;
}