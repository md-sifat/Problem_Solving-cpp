#include <stdio.h>

int main()
{
    int n,half;
    int count;
    scanf("%d", &n);

    if(n&1) half=(n>>1)+1; else half=(n>>1);

    count = n * 2 - 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==half && j==half){
                printf("?"); continue;
            } 
            (j==i || (j==n - i + 1))? printf("@") : printf(" ");   
        }
        printf("\n");
    }

    return 0;
}