#include <stdio.h>
#include <string.h>

int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  int cnto=0,cnte=0,tmp=0;
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(arr[i]%2==0){
        cnte++;
    }
    else if(arr[i]%2==1){
        cnto++;
    }
  }
  if(cnto>cnte){
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            tmp=i;
        }
    }
  }
  else{
    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            tmp=i;
  }
}

}
printf("%d",tmp+1);
}


