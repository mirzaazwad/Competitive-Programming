#include <bits/stdc++.h>
//Codeforces 1650A
//Author: Mirza Mohammad Azwad

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
       string s;
       char t;
       cin>>s>>t;
       int n=s.length();
       int i;
       bool found=false;
       for(i=0;i<n;i++){
           if(t==s[i]){
               found=true;
               if(i%2==0){
                   cout<<"YES"<<endl;
                   break;
               }
           }
       }
       if(found){
           if(i%2==0){
                continue;
           }
       }
       cout<<"NO"<<endl;
       

    }
    return 0;
}
