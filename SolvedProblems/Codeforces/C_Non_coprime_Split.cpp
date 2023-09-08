#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool primeCheck(ll num){
    for(ll i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

ll findDivisor(ll num){
    for(ll i=2;i*i<=num;i++){
        if(num%i==0){
            return i;
        }
    }
    return -1;
}

void solve()
{
    ll l,r;
    cin>>l>>r;
    if(r<=3){
        cout<<-1<<endl;
        return;
    }
    if(l==r){
        if(primeCheck(l)){
            cout<<-1<<endl;
        }
        else{
            ll a=findDivisor(l);
            cout<<a<<" "<<l-a<<endl;
        }

    }
    else{
        ll mid=(l+r)/4;
        if(mid>1 && mid+mid>=l && mid+mid<=r){
            cout<<mid<<" "<<mid<<endl;
        }
        else{
            ll a=2;
            ll b=r-2;
            if(b>=a){
                b=b-b%2;
                if(a+b>=l && a+b<=r){
                    cout<<a<<" "<<b<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
            }
            else{
                cout<<-1<<endl;
            }
        }
    }


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}