#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0);
    int n;
    cin >> n;
   int arr[n];
    unsigned long sum=0;
    for(int &i:arr) {
        cin >> i;
    sum+=i;
    }
    int cnt=1,p=0,x=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            x=1;
            break;
        }
        if(arr[i]==1){
            p=i+1;
        }
        cnt++;
    }
    if(x){
        printf("%ld %ld\n",cnt,sum-(((cnt*2)-1)-p));
    }
    else{
        printf("%ld %ld\n",cnt-1,sum-(((cnt)-1)-p)-1);
    }
    return 0;
}