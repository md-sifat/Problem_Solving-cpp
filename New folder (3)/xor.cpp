#include <iostream>
using namespace std;
 
// Returns XOR of x and y
int myXOR(int x, int y)
{
   return (x | y) & (~x | ~y);
}
 
// Driver program to test above function
int main()
{   
   int x , y;
   cin>>x>>y;
   cout <<myXOR(x, y);
   return 0;
}