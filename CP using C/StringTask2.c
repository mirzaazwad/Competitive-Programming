#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
char s[101];
int count=1;
scanf("%s",s);
int found=0;
char Vowels[10]={'a','A','e','E','o','O','i','I','u','U'};
for(int i=0;i<strlen(s);i++){
    s[i]=tolower(s[i]);
    for(int j=0;j<10;j++){
        if(s[i]==Vowels[j]){
            s[i]='x';
            found=1;
            break;
        }
    }
    if(found==0){
        count++;
    }

}
char conso[count*2+2];
count=0;
for(int i=0;i<strlen(s);i++){
    if(s[i]!='x'&& s[i]!='\0'){
        conso[count]='.';
        count++;
        conso[count]=s[i];
        count++;

    }



}
printf("%s",conso);
}
