#include<iostream>
#include<string>
using namespace std;

int solution(int n)
{
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }

    return solution(n-1) + solution(n-2);
    
    
}

int main(){
    int  n; cin>>n;
    cout<<solution(n);
}