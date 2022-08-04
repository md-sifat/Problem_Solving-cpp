#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >>n;
    int arr[n];
    int sum=0;
    for(int &i:arr) {cin >> i;
    sum+=i;}
    int i=0,x=0,cnt=0;;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            x=1;
            break;
        }
        else{
            arr[i]--;
            cnt++;
        }
    }
    int p=i;
    if(x){
        p++;
        for(i;i>=0;i--){
            if(arr[i]==0){
                break;
            }
            arr[i]--;
            cnt++;
        }
    }
    printf("%d %d\n",p,abs(cnt-sum));
    return 0; 
}