#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
  fastio;
  int t;
  cin >> t;

  while (t--)
  {
    string s = "codeforces";
    string st;
    cin >> st;
    int count = 0;
    for (int i = 0; i < st.length(); i++)
    {
      if (s[i] != st[i])
        count++;
    }
    cout << count + (s.length() - st.length()) << endl;
  }
  return 0;
}