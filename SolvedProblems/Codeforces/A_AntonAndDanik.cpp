#include<bits/stdc++.h>
using namespace std;

int main(void){
    int stringLength;
    cin>>stringLength;
    string gameplay;
    cin>>gameplay;
    int AntonWin=0, DanikWin=0;
    for(int i=0;i<stringLength;i++){
        if(gameplay[i]=='A')AntonWin++;
        else if(gameplay[i]=='D')DanikWin++;
        else{
            return -1;
        }
    }
    if(AntonWin>DanikWin){
        cout<<"Anton"<<endl;
    }
    else if(DanikWin>AntonWin){
        cout<<"Danik"<<endl;
    }
    else{//DanikWin==AntonWin
        cout<<"Friendship"<<endl;
    }
    return 0;

}
