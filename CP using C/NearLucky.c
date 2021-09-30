#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    long long int n;
    scanf("%lld",&n);
    char a[20];
    sprintf(a,"%d",n);
    int count=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='7' || a[i]=='4'){
            count++;
        }
        printf("%d\n",i);
    }

//    if(count==7){
//        printf("YES");
//    }
//    else if(count==4){
//        printf("YES");
//    }
//    else{
//        printf("NO");
//    }
int arr[4]={4,7,47,74};
int Flag;
for(int i=0;i<4;i++){
    if(count==arr[i]){
        printf("YES");
        Flag=1;
        break;
        }
        else{
        Flag=0;
        }
}
if(Flag==0){
    printf("NO");
}
}
