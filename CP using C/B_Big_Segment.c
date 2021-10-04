#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>

int main(void){
    int n;
    scanf("%d",&n);
    unsigned long a[n],b[n];
    unsigned long minl=999999999999UL;
    unsigned long maxr=0;
    bool found=false;
    int ix;
    for(int i=0;i<n;i++){
        scanf("%lu %lu",&a[i],&b[i]);
        if(b[i]>maxr) maxr=b[i];
        if(a[i]<minl)minl=a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==minl && b[i]==maxr){
            found=true;
            ix=i;
        }
    }
    if(found)printf("%d",ix+1);
    else printf("-1");

}