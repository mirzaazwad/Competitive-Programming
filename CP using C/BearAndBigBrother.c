#include<stdio.h>

int main(){
int a,b;
scanf("%d %d",&a,&b);
for(int i=1; i<10;i++){
    if(a*3>b*2){
        printf("%d",i);
        break;
    }
    else{
        a*=3;
        b*=2;
    }
}
return 0;
}
