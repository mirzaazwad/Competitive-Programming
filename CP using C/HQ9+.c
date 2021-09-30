#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char p[100];
    scanf("%s",p);
    int b=0;
    for(int i=0;i<strlen(p);i++){
        switch(p[i]){
            case 'H':
            printf("YES");
            b=1;
            break;
            case 'Q':
            printf("YES");
            b=1;
            break;
            case '9':
            printf("YES");
            b=1;
            break;
          /*  case '+':
            printf("YES");
            b=1;
            break*/
        }
        if(b==1){
            break;
        }

    }
           if(b==0){
                        printf("NO");

        }
    return 0;
}
