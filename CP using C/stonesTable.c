#include <stdio.h>
#include <string.h>
int main(){
int n;
scanf("%d",&n);
char arr[n];
scanf("%s",arr);
int count, count2;
count =0;
for(int i=1; i<n;i++){
        if (arr[i]==arr[i-1]){
            count++;


}
}
printf("%d",count);
/* For string swapping if stones were taken from either side
char tmp;
for(int i=0; i<n/2;i++){
    tmp=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-(1+i)]=tmp;
}

for(int i=1; i<n;i++){
        if (arr[i]!=arr[i-1]){
            count2=i-1;
            break;
        }

}
if(count<count2){
    printf("%d",count);
}
else{
    printf("%d",count2);
}
*/



return 0;


}
