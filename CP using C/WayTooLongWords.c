#include <stdio.h>
#include <string.h>
int main(){

   unsigned long int n;
   scanf("%lu",&n);
   char str[100];
   int val;
   char tmp[n],tmp2[n];
    int buff[n];
    char temp[n][11];
   for (int i=0;i<n;i++){
        scanf("%s",str);
        val=strlen(str);
        if (val>10){
                buff[i]=val-2;
                tmp[i]=str[0];
                tmp2[i]=str[val-1];

        }
        else{
            buff[i]=0;
            strcpy(temp[i],str);
        }

   }
   for (int i=0;i<n;i++){
        if (buff[i]==0){
            printf("%s\n",temp[i]);

        }
        else{
            printf("%c%d%c \n",tmp[i],buff[i],tmp2[i]);
        }


   }

    return 0;

    }
