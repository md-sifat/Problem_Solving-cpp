#include <iostream>
#include <string>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string num;
        cin >> num;
        int  check0 = 0 , check1 = 0;
       
        for (int i = 0; i < num.length(); i++)
        {
            if (num[i] == '0')
            {
                check0++;
            }
            else
            {
                check1++;
            }
            
        }
       
        if (check1==1 || check0==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}