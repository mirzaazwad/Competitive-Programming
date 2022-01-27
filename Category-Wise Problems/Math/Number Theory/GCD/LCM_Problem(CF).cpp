//Link: https://codeforces.com/problemset/problem/1389/A
/*
Suppose we have chosen   and   as the answer, and   is not a divisor of  . Since   belongs to  , we could have chosen   and   instead. So if the answer exists, there also exists an answer where   is a divisor of  

.

If  
, then there is no pair   such that   and  . Otherwise,   and   is the answer.
*/

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
       long long l,r;cin>>l>>r;
       if(2*l>r)cout<<-1<<" "<<-1<<endl;
       else cout<<l<<" "<<2*l<<endl;
    }
    return 0;
}
