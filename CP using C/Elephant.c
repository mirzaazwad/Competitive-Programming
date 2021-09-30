#include <stdio.h>
#include <string.h>
int main(){
unsigned int x;
unsigned int min;
scanf("%d",&x);
int r;
min=x/5;
r=x%5;
while(r!=0){
switch(r){
case 4:
    min=min+(r/4);
    r=r%4;
    break;
case 3:
    min=min+(r/3);
    r=r%3;
    break;
    case 2:
    min=min+(r/2);
    r=r%2;
    break;
    case 1:
    min=min+(r/1);
    r=r%1;
    break;
}
}
printf("%d",min);

}

