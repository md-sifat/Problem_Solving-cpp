#include<stdio.h>
int main()
{
    int i,j,k,n,l;
    scanf("%d", &n);
    l=(n+1)/2;
    for(i=1; i<=n; i++)
        printf("@");
    printf("\n");
    for(i=1; i<=l-1; i++){
        for(j=l-i; j>=1; j--)
            printf("@");
        for(j=1; j<=2*i-1; j++){
            if(j%2!=0)
                printf(" ");
            if(j%2==0)
                printf("@");
        }
        for(j=l-i; j>=1; j--)
            printf("@");
        printf("\n");
    }
    for(i=2; i<=l-1; i++){
        for(j=1; j<=i; j++)
            printf("@");
        for(j=1; j<=n-(2*i); j++){
            if(j%2!=0)
                printf(" ");
            if(j%2==0)
                printf("@");
        }
        for(j=1; j<=i; j++)
            printf("@");
            printf("\n");
    }
    for(i=1; i<=n; i++)
        printf("@");
    printf("\n");
    return 0;

}