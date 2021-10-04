#include<stdio.h>

unsigned long fact(unsigned long n){
	if(n<=1)return 1;
	else return n*fact(n-1);
}
int main(void){
	unsigned long n,m;
	scanf("%lu %lu",&n,&m);
	printf("%lu",n>m?fact(m):fact(n));
	return 0;
}
