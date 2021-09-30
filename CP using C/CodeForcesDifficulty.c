#include <stdio.h>

int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    while(n<1 ||n>100){
    scanf("%d",&n);
    }
    int msg=0;

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (arr[i]==1){
            msg=1;
        }
    }
    if(msg==1){
        printf("HARD");
    }
    else if(msg==0){
    printf("EASY");}

}
