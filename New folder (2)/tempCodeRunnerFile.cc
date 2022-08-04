#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n],sum=0;
    for(int &i:arr) {
        cin >> i;
    sum+=i;
    }
    int cnt=1,p,x=0;
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
        printf("%d %d\n",cnt,abs(sum-(((cnt*2)-1)-p)));
    }
    else{
        printf("%d %d\n",cnt-1,abs(sum-(((cnt)-1)-p))-1);
    }
    return 0;
}