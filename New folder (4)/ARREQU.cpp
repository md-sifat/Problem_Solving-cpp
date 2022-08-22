#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int arr[n];
        int max=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }

        int ar2[max];
        for (int i = 0; i < max; i++)
        {
            ar2[i]=0;
        }
        for (int i = 0; i < n; i++)
        {
            ar2[arr[i]]++;
        }
        int maxdupli=0;
        for (int i = 0; i < max; i++)
        {
            if (ar2[i]>maxdupli)
            {
                maxdupli=ar2[i];
            }
            
        }

        if(maxdupli<=(n-maxdupli-1))
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        

        
    }
    
}