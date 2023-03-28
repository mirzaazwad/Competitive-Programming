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
       int a,b,c;
       cin>>a>>b>>c;
       if(a+b==c){
        cout<<"+"<<endl;
       }
       else{
        cout<<"-"<<endl;
       }
    }
    return 0;
}