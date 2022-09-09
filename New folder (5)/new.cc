#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        int i=1;
        while (a%x !=0)
        {
            a*=x; b*=x;
        }
        while (b%y !=0)
        {
            a*=y; b*=y;
        }
        




        if ((a / x) > (b / y))
        {
            cout << "ALICE" << endl;
        }
        else if ((a / x) == (b / y))
        {

            cout << "EQUAL" << endl;
        }
        else
        {
            cout << "BOB" << endl;
        }
    }
    return 0;
}
