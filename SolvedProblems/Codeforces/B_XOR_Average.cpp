#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n%2!=0){
        for(int i=0;i<n;i++){
            cout<<n<<" ";
        }
        cout<<endl;
    }
    else{
        if((n/2)%2!=0){
            for(int i=0;i<n;i++){
                if(i%2==0){
                    cout<<1<<" ";
                }
                else{
                    cout<<3<<" ";
                }
            }
        }
        else{
            cout<<1<<" "<<4<<" "<<9<<" "<<10<<" ";
            for(int i=0;i<n-4;i++){
                cout<<6<<" ";
            }
            cout<<endl;
        }
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