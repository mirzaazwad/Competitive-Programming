#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

long long countOdd(long long L, long long R){
 
    long long N = (R - L) / 2;
    if (R % 2 != 0 || L % 2 != 0)
        N += 1;
 
    return N;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       long long a,b,k;
       cin>>a>>b>>k;
       long long oddcnt=countOdd(a,b);
       if(oddcnt<=k){
           cout<<"YES"<<endl;
       }
       else if(a==b && a>1)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    }
    return 0;
}
