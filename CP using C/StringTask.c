#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
char s[101];
gets(s);
int found=0;
char Vowels[6]={'a','e','i','o','u','y'};
for(int i=0;i<strlen(s);i++){
    s[i]=tolower(s[i]);
    for(int j=0;j<6;j++){
        if(s[i]==Vowels[j]){
            s[i]='$';
            break;
        }
    }


}

for(int i=0;i<strlen(s);i++){
    if(s[i]!='$'){
        printf(".%c",s[i]);

    }



}

}
