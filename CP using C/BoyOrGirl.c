#include<stdio.h>
#include<string.h>
int main(){
char usnam[100];
scanf("%s",usnam);
char tmp;
int count=0;

for(int i=0;i<strlen(usnam);i++){
if(usnam[i]!='$'){
    tmp=usnam[i];
    for(int j=i+1; j< strlen(usnam);j++){
        if(tmp==usnam[j]){
            usnam[j]='$';
            usnam[i]='$';


        }
    }
    count++;
}
}
if(count%2==0){
    printf("CHAT WITH HER!");
}
else{
    printf("IGNORE HIM!");
}




return 0;
}
