#include <stdio.h>
#include <string.h>

int main(){
    char x,hello[5]={'h','e','l','l','o'};
    int flag[5]={0,0,0,0,0};
    int cnt=0;
    char s[100];
    scanf("%s",s);
    int mark=-1;
    for(int i=0;i<strlen(s);i++){
        if(i>mark){
            if(hello[cnt]==s[i]){
            flag[cnt]=1;
            mark=i;
            cnt++;
        }
        }
    }
    int flg=0;
    for(int i=0;i<5;i++){
//        printf("%d",flag[i]);
        if(flag[i]==0){
            printf("NO");
            flg=0;
            break;
        }
        else{
            flg=1;
        }
    }
    if(flg==1){
        printf("YES");
    }




}
