#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[9];
    for(int i=0;i<=2;i++){
        arr[i]=i;
    }
    int c;
    int max=n+1;
    for(int i=0;i<2*n+1;i++){
        if(i<n+1){
            for(int a=0;a<max-1;a++){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            if(i!=0){
            printf("%d ",j);
            }
        }
        for(int j=i-1;j>0;j--){
            printf("%d ",j);
        }
        printf("%d",0);
        printf("\n");
        max--;
        c=i-1;
        }
        else{

        for(int i=0;i<max+1;i++){
            printf("  ");
        }
        max++;
        for(int j=0;j<=c;j++){
            if(c!=0){
            printf("%d ",j);
            }
        }
        for(int j=c-1;j>0;j--){
            printf("%d ",j);
        }
        printf("%d",0);
        c--;
        printf("\n");


        }


    }

}
