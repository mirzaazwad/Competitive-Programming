#include<stdio.h>

int main(){
int hello[100];
int hello2[5]={1,2,3,3,4};
char s[100];
scanf("%s",s);
int count;
for(int i; i<strlen(s);i++){
    switch(s[i]){
    case 'h':
    hello[i]=1;
    break;
    case 'e':
    hello[i]=2;
    break;
    case 'l':
    hello[i]=3;
    count++;
    break;
    case 'o':
    hello[i]=4;
    break;
    default:
    hello[i]=0;
    }
    }
int Bool=0;
 if(count>=2){

    for(int i=1;i<strlen(s)-1;i++){
        if((hello[i]<hello[i-1])&&(hello[i]!=0)){
            Bool=1;
        }

    }
    }
    if (Bool==1){
        printf("NO");
    }
    else{
        printf("YES");
    }


    }
