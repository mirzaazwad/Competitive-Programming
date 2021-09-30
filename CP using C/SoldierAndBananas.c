#include <stdio.h>
#include <stdlib.h>

int main()
{
int k,n,w;
int total=0;
    scanf("%d %d %d", &k, &n, &w);
    for(int i=0;i<w;i++){
        total=total+(i+1)*k;
    }
    n-=total;
    if(n<0){
    printf("%d",abs(n));
    }
    else{
        printf("%d",0);
    }



}
