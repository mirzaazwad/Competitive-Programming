#include<stdio.h>
#include<string.h>
#include<limits.h>

int min(int a,int b){
  if(a<b)return a;
  else return b;
}

int abs(int a){
  if(a<0)return -a;
  else return a;
}

int main(void){
  char s[1005],t[1005];
  scanf("%s",s);
  scanf("%s",t);
  int len_s=strlen(s);
  int len_t=strlen(t);
  int ans=INT_MAX;
  for(int i=0;i<len_s;i++){
      if(s[i]==t[0]){
        int k=1;
        int sum=0;
        int tmp=i;
        for(int j=i+1;j<len_s;j++){
          if(s[j]==t[k]){
            sum+=abs(tmp-j);
            tmp=j;
            k++;
          }
        }
        if(k==len_t){
          ans=min(ans,sum);
        }
      }
    }
    printf("%d",ans);
    return 0;
}