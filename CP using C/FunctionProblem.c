#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,total=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        total=total+(i+1)*num(i+1);
    }
    printf("%d",total);
    return 0;
}

int num(int x){
    int tmp=1;
    for(int i=0;i<x;i++){
        tmp=(-1)*tmp;
    }
    return tmp;

}
