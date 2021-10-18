#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    int j;
    cin>>c>>j;
    j--;
    if((c=='a'||c=='h')&&(j==0||j==7)){
        cout<<3<<endl;
        return 0;
    }
    for(int i=1;i<7;i++){
        if(c=='a'||c=='h'){
            cout<<5<<endl;
            return 0;
        }
    }
    for(char a='b';a<='g';a++){
        if(j==0||j==7){
            cout<<5<<endl;
            return 0;
        }
    }
    cout<<8<<endl;
    return 0;
}