#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
ll a,b;

bool ans(ll num){
  if(num==b){
    return true;
  }
  if(num%3==0 && ((num)*2)/3 + num/3==num){
    return ans((num*2)/3) | ans(num/3);
  }
  return false;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
      cin>>a>>b;
      cout<<(ans(a)?"YES":"NO")<<endl;
    }
    return 0;
}