#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);cout.tie(NULL)

#define endl "\n"

using namespace std;

void solve(){
    long long n;
    cin>>n;
    if(!(n&1LL)){
        n=n/2;
        if(!(n&1)){
            n++;
            cout<<n<<" "<<n<<" "<<1<<endl;
        }
        else{
            bool found1=false;
            bool found2=false;
            long long a,b,c;
            a=b=c=0;
            for(int i=0;i<=64;i++){
                if(((1LL<<i)&n)){
                    if(!found1){
                        found1=true;
                        a=a^(1LL<<i);
                    }
                    else if(!found2){
                        found2=true;
                        b=b^(1LL<<i);
                    }
                    else{
                        c=c^(1LL<<i);
                    }
                }
            }
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
    else{
        cout<<-1<<endl;
    }
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       solve();
    }
    return 0;
}