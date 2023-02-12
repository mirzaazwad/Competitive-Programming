#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"

using namespace std;
#define ll long long

int main()
{
  fastio;
  int tc;
  cin >> tc;
  for (int i = 1; i <= tc; i++)
  {
    cout << "Case " << i << ": ";
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll sum = a + b + c;
    if (sum % 3 != 0)
    {
      cout << "Fight" << endl;
      continue;
    }
    ll expected = sum / 3;
    vector<ll>arr={a,b,c};
    sort(arr.begin(),arr.end());
    if(a==b && b==c){
      cout<<"Peaceful"<<endl;
    }
    else if (abs(a - expected) % d == 0 && abs(b - expected) % d == 0 && abs(c - expected) % d == 0 && arr[1]>=d)
    {
      cout<<"Peaceful"<<endl;
    }
    else
    {
      cout << "Fight" << endl;
    }
  }
  return 0;
}