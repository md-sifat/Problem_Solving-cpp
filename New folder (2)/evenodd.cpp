#include <iostream>
using namespace std;
int main()
{
    long long n, k, temp;
    cin >> n >> k;
    if (n % 2 == 0){
        temp = (n / 2);
    }
    else{
        temp = (n / 2) + 1;
    }
    int i=2;
    if (k <= (temp))
        cout << k + (k - 1) << endl;
    else if (k > (temp))
        cout << (i * (k - (temp))) << endl;
    return 0;
}