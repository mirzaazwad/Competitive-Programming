#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

int main()
{
  fastio;
  int t;
  cin >> t;

  while (t--)
  {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll alice = a;
    ll bob = a;
    ll jokes = a;
    int cont = 0;
    if(a==0){
      cout<<1<<endl;
      continue;
    }
    ll Min=min(b,c);
    ll Max=max(b,c);
    Max-=Min;
    if(Max+d<=a){//all of the remaining jokes can be told
      cout<<jokes+Min*2+d+Max<<endl;//min*2 as we have an alternating sequence where alice gets upset and bob gets happy and vice versa
    }
    else{//only a+1 additional jokes can be told
      cout<<jokes+Min*2+a+1<<endl;//min*2 as we have an alternating sequence where alice gets upset and bob gets happy and vice versa
    }
  }
  return 0;
}