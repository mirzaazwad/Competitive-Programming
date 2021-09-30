#include <stdio.h>

int main(){
unsigned long long int n,m,a, val1, val2, max;
scanf("%llu %llu %llu",&n,&m, &a);
val1=trueDiv(n,a);
val2=trueDiv(m,a);
max=val1*val2;
printf("%llu ",max);

}

int trueDiv(int x, int y){
long double a=(long double)x/y;
int b=x/y;
if ((a-b)<1 && (a-b)>0){
    b++;
}
return b;

}
