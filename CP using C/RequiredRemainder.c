#include<stdio.h>

int main(){
int t,x,y,n,htmp;//Test Cases
scanf("%d\n",&t);
int highest[t];
for(int j=0;j<t;j++){
highest[j]=0;
}
for(int j=0;j<t;j++){
htmp=highest[j];
scanf("%d %d %d",&x,&y,&n);

for(int i=0;i<=n;i++){
    if (i%x==y && i>htmp){
            htmp=i;
    }
}
highest[j]=htmp;
}
for(int j=0;j<t;j++){
printf("%d\n",highest[j]);
}
}
