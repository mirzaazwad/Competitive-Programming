#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int a[100000],b[100000];

int main(void){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(int i=1;i<n;i++){
		if(a[i]>a[i-1] && b[i]<b[i-1]){
			printf("Happy Alex");
			return 0;
		}
	}
	printf("Poor Alex");
	return 0;
}
