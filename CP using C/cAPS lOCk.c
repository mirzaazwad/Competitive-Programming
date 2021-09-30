#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char s[101];
    scanf("%s",s);
    s[0]=toupper(s[0]);
    for(int i=1;i<strlen(s);i++){
        s[i]=tolower(s[i]);
    }
    printf("%s",s);

    return 0;
}
