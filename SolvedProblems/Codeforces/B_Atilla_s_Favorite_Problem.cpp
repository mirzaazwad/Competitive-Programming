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
       int n;
       cin>>n;
       string x;
       cin>>x;
       bool alp[26]={false};
       for(int i=0;i<n;i++){
        alp[x[i]-'a']=true;
       }
       int ix=0;
       for(int i=0;i<26;i++){
        if(alp[i]){
            ix=i+1;
        }
       }
       cout<<ix<<endl;
    }
    return 0;
}