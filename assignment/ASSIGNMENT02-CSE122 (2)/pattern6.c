#include<stdio.h>
int main()
{
int n,cnt=0;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    if(i%2){
    for(int j=1;j<=i;j++){
        printf("#");
    }
    for(int j=(i+1);j<=(2*n);j++){
        if(j>=(2*n)-cnt) printf("&");
        else printf(" ");
    }
    }
    else{
            for(int j=1;j<=i;j++){
        printf("&");
    }
        for(int j=(i+1);j<=(2*n);j++){
        if(j>=(2*n)-cnt) printf("#");
        else printf(" ");
    }
    }
    printf("\n");
    cnt++;
}
return 0;
}