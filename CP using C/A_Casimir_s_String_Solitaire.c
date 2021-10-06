#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

void solve(){
    char s[51];//extra 1 to accomodate null character
    scanf("%s",s);
    //two conditions have to be kept in mind:
    //He can either remove A and B OR B and C 
    //but not both
    //my approach: loop through the string and find the maximum number of A,B and C characters
    int len=strlen(s);//len contains the string length
    int Anum=0,Bnum=0,Cnum=0;// number of A,B and C characters
    for(int i=0;i<len;i++){
        if(s[i]=='A')Anum++;
        else if(s[i]=='B')Bnum++;
        else if(s[i]=='C')Cnum++;
    }
    if(Anum>Cnum){
        len-=(Cnum*2);
        Bnum-=Cnum;
        if(Anum>Bnum)len-=(Bnum*2);
        else len-=(Anum*2);
    }
    else{
        len-=(Anum*2);
        Bnum-=Anum;
        if(Cnum>Bnum)len-=(Bnum*2);
        else len-=(Cnum*2);
    }
    if(len==0)printf("YES\n");
    else printf("NO\n");
}


int main(void){
    int t;
    scanf("%d",&t);
    while(t--){//loop until t=0, if t=0 means false so stop loop
        solve();
    }
    return 0;
}