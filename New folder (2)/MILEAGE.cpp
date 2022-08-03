#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        float n, x, y, a, b;
        cin >> n >> x >> y >> a >> b;

        if ((n * (x / a)) == (n * (y / b)))
        {
            cout << "ANY" << endl;
            continue;
        }
        if ((n * (x / a)) > (n * (y / b)))
        {
            cout << "DIESEL" << endl;
        }
        else
        {
            cout << "PETROL" << endl;
        }
    }

    return 0;
}
