#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


void solve(){
    int n,c0,c1,h;
    scanf("%d %d %d %d",&n,&c0,&c1,&h);
    char str[n+2];
    scanf("%s",str);
    int len=strlen(str);
    int cnt1=0,cnt0=0;
    for(int i=0;i<len;i++){
        if(str[i]=='1')cnt1++;
        else cnt0++;
    }
    int min3=cnt0*c0+cnt1*c1;
    int min1=cnt0*c0 + cnt1*c0+cnt1*h;
    int min2=cnt0*c1+cnt1*c1+cnt0*h;
    min1=min1<min3?min1:min3;
    min1=min1<min2?min1:min2;
    printf("%d\n",min1);
}

int main(void){
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }
    return 0;
}