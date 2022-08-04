#include<bits/stdc++.h>
using namespace std;

void init(void){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int main()
{
    init();
    int n,m;
    while(cin >> n>>m){
    
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int x[2],y[2];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==2){
                x[0]=i+1;y[0]=j+1;
            }
            if(arr[i][j]==1){
                x[1]=i+1;y[1]=j+1;
            }
        }
    }
    printf("%d\n",abs(x[0]-x[1])+abs(y[0]-y[1]));}
        return 0;
}