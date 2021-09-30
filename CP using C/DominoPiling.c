#include <stdio.h>

int main(){
    int N,M;
    scanf("%d %d", &N, &M);
    while(N<1 || N>16 || M<1 || M>16){
        scanf("%d %d", &N, &M);
    }
int Area=(N*M)/(2*1);
printf("%d",Area);

    return 0;

    }
