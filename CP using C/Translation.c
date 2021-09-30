#include <stdio.h>
#include <string.h>

int main(){
  char s1[102];
  char s2[102];
  scanf("%s",s1);
  scanf("%s",s2);
  char buffer[102];
  for(int i=0;i<strlen(s1);i++){
    buffer[i]=s1[strlen(s1)-1-i];
  }
int flg;
  for(int i=0;i<strlen(s1);i++){
    if(s2[i]==buffer[i]){
        flg=1;
    }
    else{
        flg=0;
        break;
    }
  }
  if(flg==1){
    printf("YES");
  }
  else{
    printf("NO");
  }
}
