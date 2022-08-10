#include<iostream>
#include<string>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        int arr[n];
        int max=0;
        for (int i = 0; i < n; i++){
            cin>>arr[i];
            if (arr[i]>max){
                max=arr[i];
            }
        }
        int ar[max+1];
        for (int i = 0; i < max+1; i++){
            ar[i]=-1;
        }
        for (int i = 0; i < n; i++){
            ar[arr[i]]++;
        }
        
        int max2=-2;
        for (int i = 0; i < max+1; i++){
            if (ar[i]>max2){
                max2=ar[i];
            }
            
        }
        int ar2[max2];
        for (int i = 0; i < max2+1; i++)
        {
            ar2[i]=-1;
        }
        for (int i = 0; i < max+1; i++)
        {
            ar2[ar[i]]++;
        }
        
        



        bool check=false , check2=false;
        for (int i = 0; i < max+1; i++)
        {
            if (ar[i]>0 )
            {
                check=true;
            }
            
        }
        for (int i = 0; i < max2+1; i++)
        {
            if (ar2[i]<1 )
            {
                check2=true;
            }
            
        }

        if (check && check2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
        
        
        

        
    }
    
}