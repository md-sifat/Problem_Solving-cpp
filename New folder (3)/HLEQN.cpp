#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        bool check = 0;
        for (int i = 1; i <= sqrt(n) ; i++){
            if( (n-2*i)%(2+i) == 0 && (n-2*i)>0 ){
               cout << "YES" << endl;
               check=1;
               break;
            }
        }
        if (!check){
            cout << "NO" << endl;
        }
    }
}