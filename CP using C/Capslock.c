#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char s[101];
    scanf("%s",s);
    s[0]=toupper(s[0]);
    int cnt1,cnt2,tmp;
    for(int i=1;i<strlen(s);i++){
        tmp=(int)s[i];
        if (tmp>=97 && tmp<=122){
            cnt1++;
        }
        else if(tmp>=65 && tmp<=90){
            cnt2++;
        }
    }
    if(cnt2-cnt1<4){
    for(int i=1;i<strlen(s);i++){
        s[i]=tolower(s[i]);
    }
    printf("%s",s);
}
else{
    s[0]=tolower(s[0]);
    for(int i=1;i<strlen(s);i++){
        s[i]=toupper(s[i]);
    }
    printf("%s",s);
}
    return 0;
}
