#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n & 1 == 1)
    {
        cout << "ODD" << endl;
    }
    else
    {
        cout << "EVEN" << endl;
    }
}