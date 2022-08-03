#include<bits/stdc++.h>

using namespace std;
int main()
{
    int x;
    cin >> x;
    while(x--){
        int n,h,m;
        cin >> n>>h>>m;
        int h1=0,m1=0;
        while(n--){
            int a,b;
            cin >> a>> b;
            while(1){
                if(h==a && m==b){
                    break;
                }
                else{
                    m++;
                    if(m==60){
                        m=0;
                        h++;
                        h1++;
                    }
                    if(h==12 && m==60){
                        h=13;
                        m=0;
                    }
                    if(h==23 && m==60){
                        h=m=0;
                    }
                }
            printf("%d %d\n",h1,m);
            }
        }
    }
}