#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       long a,b,c,x,y;
       cin>>a>>b>>c>>x>>y;
       if(a>=x){
           a-=x;
       }
       else{
           x-=a;
           a=0;
           c-=x;
       }
       if(b>=y){
           b-=y;
       }
       else{
           y-=b;
           b=0;
           c-=y;
       }
    if(c>=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}