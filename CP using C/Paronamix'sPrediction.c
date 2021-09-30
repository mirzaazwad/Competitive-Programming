#include <stdio.h>
#include <stdlib.h>
int primeChecker(int *x);
int main(void)

{
    int a,b,flag=1;
    scanf("%d %d",&a,&b);
    while(flag==1){
        if(primeChecker(&a)==0 && primeChecker(&b)==0){
            printf("NO");
            break;
        }
        a++;
        if(primeChecker(&a)==1 && a==b){
            printf("YES");
            break;
        }
        else if(primeChecker(&a)==1 && a!=b){
            printf("NO");
            break;
        }

    }
}

int primeChecker(int *x){
    for(int i=2;i<*x;i++){
        if(*x%i==0){
            return 0;
        }
    }
    return 1;

}
