// In the name of Allah, The Lord of Mercy, The Giver of Mercy
// Author: Mirza Mohammad Azwad
// Institution: Islamic University of Technology
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;
#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

void solve(ll n)
{
  if ((n&1))
  {
    if(n<=3){
      cout << "NO";
    }
    else{
      cout<<"YES"<<endl;
      for(int i=0;i<n;i++){
        if(i%2==0){
          cout<<((n)/2-1)<<" ";
        }
        else{
          cout<<-n/2<<" ";
        }
      }
    }
    
  }
  else
  {
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
      if (i % 2 == 0)
      {
        cout << -1 << " ";
      }
      else
      {
        cout << 1 << " ";
      }
    }
  }
}

signed main()
{
  fastio;
  int tc;
  cin >> tc;
  while (tc--)
  {
    ll n;
    cin >> n;
    solve(n);
    cout << "\n";
  }
  return 0;
}