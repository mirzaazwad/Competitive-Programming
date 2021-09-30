#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int arr[6]={a+b+c,a*b*c,a+b*c,a*b+c,(a+b)*c,a*(b+c)};
    int tmp,max;
    max=0;
    for (int i=0;i<6;i++){
        if (arr[i]>max){
            max=arr[i];
        }

    }
    printf("%d",max);

    return 0;

    }

