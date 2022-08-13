#include <iostream>
#include<algorithm>
using namespace std;

int myXOR(int x, int y)
{
   return (x | y) & (~x | ~y);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long  int n, y;
        unsigned x;
        cin >> n >> x >> y;
        int arr[n];
        for(int & i:arr) cin>>i;
        for (int i = 0; i < y; i++)
        {
            sort(arr , arr+n);
            arr[0] = myXOR(arr[0],x);
            
        }

        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        

    }
    return 0;
}
