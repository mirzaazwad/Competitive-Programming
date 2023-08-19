#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
typedef long long ll;
using namespace std;



int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       ll y,x;
       cin>>y>>x;
       if(x<y){
        if(y%2==0){
            cout<<y*y-x+1<<endl;
        }
        else{
            cout<<(y-1)*(y-1)+x<<endl;
        }
       }
       else{
        if(x%2==0){
            cout<<(x-1)*(x-1)+y<<endl;
        }
        else{
            cout<<x*x-y+1<<endl;
        }
       }
    }
    return 0;
}