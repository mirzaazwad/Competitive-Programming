#include <stdio.h>

int main(void){
    int num1,num2;
    int n,m,tmp;
    printf("Enter a fraction: ");
    scanf("%d/%d",&num1,&num2);
    if(num1>num2){
        m=num1;
        n=num2;
    }
    else{
        m=num2;
        n=num1;
    }
    while(n!=0){
        tmp=n;
        n=m%n;
        m=tmp;
    }
    printf("%d/%d",(num1/m),(num2/m));
}
