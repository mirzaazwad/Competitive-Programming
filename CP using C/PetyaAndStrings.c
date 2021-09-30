#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    char s1[100];
    int s[100];
    char s2[100];
    int d[100];
    int flag;
    scanf("%s",s1);

    scanf("%s",s2);
    for(int i=0;i<strlen(s1);i++){
        if(tolower(s1[i])==tolower(s2[i])){
            flag=0;
        }
        else if(tolower(s1[i])>tolower(s2[i])){
            flag=1;
            break;
        }
        else if(tolower(s1[i])<tolower(s2[i])){
            flag=-1;
            break;
        }
}
printf("%d",flag);


}
