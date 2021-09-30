#include <stdio.h>
#include <string.h>
int main(){
char words[100];
scanf("%s",words);
char temp;
int tmp;
int upr,lwr;
upr=0;
lwr=0;
for(int i=0; i<strlen(words);i++){
    temp=words[i];
    tmp=(int)temp;
    if (tmp>=97 && tmp<=122){
            lwr++;
}
    else if(tmp>=65 && tmp<=90){
        upr++;
    }
}
if(upr>lwr){
    for(int i=0;i<strlen(words);i++){
        temp=words[i];
        tmp=(int)temp;
        if (tmp>=97 && tmp<=122){
            tmp-=32;
}
    temp=(char)tmp;
    words[i]=temp;
    }
}
else{
for(int i=0;i<strlen(words);i++){
        temp=words[i];
        tmp=(int)temp;
        if(tmp>=65 && tmp<=90){
            tmp+=32;
    }
    temp=(char)tmp;
    words[i]=temp;
}
}
printf("%s",words);
return 0;
}


