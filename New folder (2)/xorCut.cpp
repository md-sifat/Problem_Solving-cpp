#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int dupli = 0;
    for (int i = 0; i < n; i++)
    {
        dupli = arr[i]^dupli;
    }

    // cout<<dupli<<endl;
    int cntr=0;
   while (1)
   {    
    if((dupli & 1)==1){
        break;
    }
    else
    {
        cntr++;
        dupli = (dupli>>1);
    }
   }
    // cout<<cntr<<endl;
   vector<int> vec1;
   vector<int> vec2;
   for (int i = 0; i < n; i++)
   {
    if ((arr[i] & (1<<cntr)))
    {
        // cout<<"check1";
        vec1.push_back(arr[i]);
    }
    else
    {
        // cout<<"check2";
        vec2.push_back(arr[i]);
    }
   }

//    cout<<"vec1:"<<endl;
    int ans1=0 , ans2=0;
   for (int i = 0; i < vec1.size(); i++)
   {
    ans1=ans1^vec1[i];
   }
//    cout<<"vec2:"<<endl;
   for (int i = 0; i < vec2.size(); i++)
   {
    ans2=ans2^vec2[i];
   }
   cout<<ans1<<" "<<ans2;
   
       
    
    
}