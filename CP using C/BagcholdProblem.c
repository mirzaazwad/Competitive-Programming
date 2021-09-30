#include <stdio.h>
#include <stdlib.h>

int main()
{
   long unsigned int x, loopVar;
   scanf("%lu",&x);
   loopVar=x/2;
   if(x%2==0){
    printf("%d\n",loopVar);
    for(int i=0;i<loopVar;i++){
        printf("%d ",2);
    }
    printf("\n");
   }
   else{
   loopVar;
    printf("%lu\n",loopVar);
    loopVar=(x/2)-1;
    for(int i=0;i<loopVar;i++){
        printf("%d ",2);
    }
    printf("%d",3);
   }
    return 0;
}
