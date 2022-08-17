#include <bits/stdc++.h>
using namespace std;
 

 
// Driver program to test above function
int main()
{   
   int x ;
   cin>>x;
   int arr[x];
   for (int i = 0; i < x; i++)
   {
      cin>>x;
   }
   int *min= min_element(arr , arr+x);
   cout <<*min<<endl;
   
   return 0;
}