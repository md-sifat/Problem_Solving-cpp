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
        int n, y;
        long long int x;
        cin >> n >> x >> y;
        int arr[n];
        for(int & i:arr) cin>>i;

        int m=n;
        if (y%2!=0)
        {
            m++;
        }
        
        for (int i = 0; i < m; i++)
        {
            sort(arr , arr+n);
            arr[0] = myXOR(arr[0],x);

        }

        sort(arr , arr+n);

        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        

    }
    return 0;
}
