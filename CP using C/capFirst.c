#include <stdio.h>
#include <string.h>
int main(){
char words[1000];
scanf("%s",words);
char temp=words[0];
int tmp=(int)temp;
if (tmp>=97 && tmp<=122){
    tmp-=32;
}
temp=(char)tmp;
words[0]=temp;
printf("%s",words);
}


