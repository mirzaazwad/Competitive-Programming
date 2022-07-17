#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,m;
    cin >> n >> m;
    int count=1;
    for(int i=1;i<=n;i++){
        if((i&1)){
            for(int j=1;j<=m;j++){
                cout<<'#';
            }
        }
        else{
            count++;
            if(count%2!=0){
                cout<<'#';
            }
            for(int j=1;j<=m-1;j++){
                cout<<'.';
            }
            if(count%2==0){
                cout<<'#';
            }
        }
        cout<<endl;
    }
}