#include <stdio.h>
#include <stdlib.h>

int main(void){
    unsigned int k,x,y,n,t,tmp;
    scanf("%ld",&t);
    int ans[t];
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&x,&y,&n);
        tmp=n%x;
        if(tmp>=y){
            k=n-n%x+y;//the remainder(tmp) is greater(than k) so the n-tmp
            // gives the max number that can be divided wihout remainder
            //add the remainder and voila u have the max value for k
        }
        else{
            k=n-n%x-(x-y);
            //the remainder is lesser so here if you do n-tmp
            //it gives you the max number that can be divided but since y is greater than tmp
            // by drawing a number line or basic logic, you can understand that
            //adding y will make the number overshoot the limit set by n
            //so to prevent that we need to subtract x, which means we remove an
            //equal x part which brings us to the same pos as before as (n-x)-n%x is also divisible without remainder
            //but it is the second greatest number divisible without remainder
            //adding y to it means that voila we have the max value of k within the limit set by n
        }
        printf("%d\n",k);
    }
    return 0;
}
