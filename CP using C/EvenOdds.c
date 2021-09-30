#include<stdio.h>

int main(){
unsigned long long int n,k,odd,even,count;
scanf("%lld %lld",&n,&k);
if(n%2!=0){
    odd=n/2+1;
    even=n/2;
}
else{
    even=n/2+1;
    odd=n/2;
}
if(k<=odd){
    //The kth odd number is given by
    count=1;
    count=count+2*(k-1);
    printf("%lld",count);
}
else{
count=0;
    k=k-odd+1;
    count=count+2*(k-1);
    printf("%lld",count);

}
/*The issue with looping here is the runtime
if(k<=odd){
    for(int i=1;i<n;i+=2){
        if(count==k){
            printf("%d",i);
        }
        count++;
    }
}
else{
k=k-odd+1;
for(int i=0;i<n;i+=2){
        if(count==k){
            printf("%d",i);
        }
        count++;
    }
}
*/
//Lets go for some maffs


return 0;
}
