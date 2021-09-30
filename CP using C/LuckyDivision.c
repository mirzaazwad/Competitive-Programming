#include<stdio.h>

int main(){
int n;
scanf("%d",&n);
int Bool=0;
int div[12]={4,7,47,74,447,474,744,477,747,774,444,777};
if(n>=1 && n<=46){
    if(n%4==0 || n%7==0){
        printf("YES");
    }
    else{
        printf("NO");
    }

}
else if(n>=47 && n<447){
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0){
        printf("YES");
    }
    else{
        printf("NO");
    }

}
else if(n>=447 && n<=1000){
    for(int i=0;i<12;i++){
        if(n%div[i]==0){
            Bool=1;
            break;
        }
    }
    if(Bool==1){
        printf("YES");
    }
    else{
        printf("NO");
    }

}
return 0;
}
