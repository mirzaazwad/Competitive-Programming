#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
char s[101];
scanf("%s",s);
char* p;
char* q;
p=strstr(s,"0000000");
q=strstr(s,"1111111");
if(p){
    printf("YES");
}
else if(q){
    printf("YES");
}
else{
    printf("NO");
}
}
