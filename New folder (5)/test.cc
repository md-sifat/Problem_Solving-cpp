#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0 ,cntr = 0;
    for (int i = 0; i < 100; i)
    {
        cout<<i<<"  ";
        if(cntr==0){
            i++;
            cntr++;
            continue;
        }
        if(cntr==1){
            i+=2;
            cntr++;
            continue;
        }
        if(cntr==2){
            i+=3;
            cntr=0;
            continue;
        }

    }
    
}