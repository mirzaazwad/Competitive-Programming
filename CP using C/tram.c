#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   scanf("%d",&n);
   int a, b=0,temp_b,min=-999;
   for(int i=0;i<n;i++){
        scanf("%d %d",&a,&temp_b);
        b-=a;
        b+=temp_b;
        if(b>min){
            min=b;
        }

    }
    printf("%d",min);
   }




