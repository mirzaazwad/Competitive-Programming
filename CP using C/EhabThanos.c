#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	return (*(int *)a - *(int *)b);
}

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}


int main(void){
	int n;
	scanf("%d",&n);
	int arr[2*n];
	bool found=true;
	for(int i=0;i<2*n;i++){
		scanf("%d",&arr[i]);
		if(i>0){
			if(arr[i]!=arr[i-1])found=false;
		}
	}
	qsort(arr,2*n, sizeof(int),cmp);
	if(found){
		printf("-1");
		return 0;
	}
	for(int i=0;i<2*n;i++)printf("%d ",arr[i]);
	return 0;
	
}
