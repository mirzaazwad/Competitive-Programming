#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

void solve(){
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    int a=0,b=0;
    bool found=false;
    for(int i=n-1; i>=0; i--){
        if(str[i]==')' && !found){
            a++;
        }
        else if(found){
            b++;
        }
        else{
            b++;
            found=true;
        }
    }
    if(b<a){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}


int main(void){
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }
}