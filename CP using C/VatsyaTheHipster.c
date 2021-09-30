#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b;
int diffDay, possPair,pairDay;
scanf("%d %d",&a, &b);
if (a<b){
    diffDay=a;
    possPair=b-a;
}
else if(a==b){
    diffDay=a;
    pairDay=0;
    possPair=1;
}
else if (b<a){
    diffDay=b;
    possPair=a-b;
}
if (possPair%2==0){
    pairDay=possPair/2;
}
else if(possPair>2 && possPair%2!=0){
    pairDay=possPair/2;
}
else{
    pairDay=0;
}
printf("%d %d", diffDay, pairDay);
return 0;
}
