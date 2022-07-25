#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int arr[n][10];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            int cntr=0;
            for (int j = 0; j < 10; j++)
            {
                if(arr[j][i]==1){
                    cntr++;
                }
            }
            if (cntr%2!=0)
            {
                ans++;
            }
             
        }

        cout<<ans;
        
        
    }
    
}