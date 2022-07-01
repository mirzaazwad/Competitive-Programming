#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,a;
    cin>>n>>a;
    int criminalsInCity[n+1];
    for(int i=1;i<=n;i++)cin>>criminalsInCity[i];
    int criminalsCaught=0;
    for(int i=0;i<=n;i++){
        if(a-i<=0 && a+i>n)break;
        if(a-i<=0 && criminalsInCity[a+i])criminalsCaught++;
        else if(a+i>n && criminalsInCity[a-i])criminalsCaught++;
        else if(criminalsInCity[a-i] && criminalsInCity[a+i]){
            if(a-i==a+i)criminalsCaught++;
            else criminalsCaught+=2; 
        }
    }
    cout<<criminalsCaught<<endl;

}