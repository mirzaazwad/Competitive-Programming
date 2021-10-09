#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>


int a,b,cost=0;
int arr[21];

int min(int a,int b){
    if(a<b)return a;
    else return b;
}

bool isPalindrome(int front,int back){
    if(!(front<=back)){
        return true;
    }
    if(arr[front]!=arr[back]){
        if(arr[front]==2 && arr[back]!=2){
            arr[front]=arr[back];
            if(arr[front]==0)cost+=a;
            else cost+=b;
        }
        else if(arr[front]!=2 && arr[back]==2){
            arr[back]=arr[front];
            if(arr[back]==0)cost+=a;
            else cost+=b;
        }
        else return false;
    }
    if(arr[front]==arr[back] && arr[front]==2){
        if(front!=back)cost+=(2*min(a,b));
        else cost+=min(a,b);
    }
    return isPalindrome(++front,--back);
}

int main(){
    int n;
    scanf("%d %d %d",&n,&a,&b);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(isPalindrome(0,n-1))printf("%d",cost);
    else printf("%d",-1);
    return 0;   
}