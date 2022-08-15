#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int indexFind(int arr[] , int n , int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            return i;
        }   
    }
    return 0;
}

int main()
{
    int n; 
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int *min= min_element( arr , arr+n );
    cout<<*min<<endl;
    int index = indexFind(arr , n , *min);
    cout<<index<<endl;
}