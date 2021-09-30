#include <stdio.h>
#include <math.h>
int main(){
int t, a,b,d;
scanf("%d",&t);
int response[t];
for(int i=0;i<t;i++){
    scanf("%d %d %d",&a, &b, &d);
    if (abs(a-b)<=d){
        response[i]=1;
    }
    else if (abs(a-b)>d){
        response[i]=0;
    }
    else if (d==0 && a!=b){
        response[i]=0;
    }
    else if((b-d)>=1 && a>=1){
        response[i]=1;
    }
    else if(a<=(1+d) && b>=1){
        response[i]=1;
    }

    else{
        response[i]=0;
    }
}
for(int i=0;i<t;i++){
    if(response[i]==0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
}


return 0;
}
