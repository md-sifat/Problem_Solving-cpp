#include<iostream>
#include<string>
#include<algorithm>
#include <numeric>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int arr[n];
        int sum=0;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        int temp=0;

        while (1)
        {
            sort(arr , arr+n);
            arr[n-1]=__gcd(arr[n-1] , arr[n-2]);
            sum = accumulate(arr, arr+n, sum);
            if (sum==temp)
            {
                break;
            }
            temp = sum;
            
        }

        cout<<sum;
        
        
    }
    
}