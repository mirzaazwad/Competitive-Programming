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
  string s="314159265358979323846264338327";
  while (t--)
  {
    string val;
    cin>>val;
    int count=0;
    for(int i=0;i<val.size();i++){
      if(val[i]==s[i]){
        count++;
      }
      else{
        break;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}