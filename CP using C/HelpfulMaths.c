#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int count=0;
    int val[101];
    char s[101];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        if((i+1)%2!=0){
            val[count]=s[i];
            count++;
        }
    }
    int total=count,temp,minIx;
    for(int i=0;i<count-1;i++)
    {
      minIx=i;

        for(int j=i+1;j<count;j++)
        {
            if(val[j]<val[minIx])
            {
              minIx=j;
            }
        }
        temp=val[i];
        val[i]=val[minIx];
        val[minIx]=temp;
    }

    count=0;
    for(int i=0;i<strlen(s);i++){
        if((i+1)%2!=0){
            s[i]=(char)val[count];
            count++;
        }
        else{
            s[i]='+';
        }
    }
    printf("%s",s);
}
