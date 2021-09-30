#include <stdio.h>

int main() {
    int dival[5]={100,20,10,5,1};
  int n,tmp;
 n=0;
  while(n<1 || n>1000000000){
  scanf("%d",&n);
  }

  int x=0;
    tmp=0;
    int z=0;
    for (int i=0; i<5; i++){

        if(n%dival[i]==0){
            z=dival[i];
            z=n/z;
            z=x+z;
            printf("%d",z);
            break;
        }
        else if(dival[i]==1){
            printf("%d",x+n);
            break;
        }
        else{
            tmp=n/dival[i];
                x+=tmp;
                n-=tmp*dival[i];
        }
    }
  return 0;
}
