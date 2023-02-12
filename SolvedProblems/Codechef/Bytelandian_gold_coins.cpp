#include<iostream>
using namespace std;
#define ll long long

ll calc(ll n){
    if(n>=12)return calc(n/2)+calc(n/3)+calc(n/4);
    else return n;
}

int main(void)
{
    ll n;
    while(cin>>n){
        cout<<calc(n)<<endl;
    }
}