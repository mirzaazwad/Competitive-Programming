#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long

using namespace std;

int main()
{
    fastio;
    ll n;char s;
    cin>>n>>s;
    ll num=0;
    switch(s){
        case 'a':
        num=4;
        break;
        case 'b':
        num=5;
        break;
        case 'c':
        num=6;
        break;
        case 'd':
        num=3;
        break;
        case 'e':
        num=2;
        break;
        case 'f':
        num=1;
        break;
    }
    ll seat=(((n-1)/4)*16);
    if(n%4==1){
        cout<<seat+num<<endl;
    }
    else if(n%4==2){
        cout<<seat+num+7<<endl;
    }
    else if(n%4==3){
        cout<<seat+num<<endl;
    }
    else{
        cout<<seat+num+7<<endl;
    }



}


