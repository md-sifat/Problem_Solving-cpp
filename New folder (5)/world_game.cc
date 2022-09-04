#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n; int m=3*n;
        string name[m];
        for (int i = 0; i < m; i++)
        {
            cin>>name[i];
        }
        int arr[m];
        for (int i = 0; i < m; i++)
        {
            arr[i]=0;
        }
        
        for (int i = 0; i < m; i++)
        {
            for (int j = i+1; j < m; j++)
            {
                if (name[i]==name[j])
                {
                    arr[i]++;
                    arr[j]++;
                }
                
            }
            
        }

        int p1=0 , p2=0 , p3=0;

        for ( int i=0 ; i < n; i++)
        {
            if(arr[i]==1) p1+=3;
            if(arr[i]==2) p1+=1;
            if(arr[i]==3) p1+=0;
        }
        for ( int i=n ; i < n*2; i++)
        {
            if(arr[i]==1) p2+=3;
            if(arr[i]==2) p2+=1;
            if(arr[i]==3) p2+=0;
        }
        for ( int i=n*2 ; i < m; i++)
        {
            if(arr[i]==1) p3+=3;
            if(arr[i]==2) p3+=1;
            if(arr[i]==3) p3+=0;
        }
        cout<<p1<<" "<<p2<<" "<<p3<<endl;
        
        
        
        
    }
}