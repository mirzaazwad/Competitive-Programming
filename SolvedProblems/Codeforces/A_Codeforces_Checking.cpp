#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    set<char>s;
    s.insert('c');
    s.insert('o');
    s.insert('d');
    s.insert('e');
    s.insert('f');
    s.insert('o');
    s.insert('r');
    s.insert('s');
    int t;
    cin>>t;
    while(t--){
      char c;
      cin>>c;
      if(s.find(c)!=s.end()){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    return 0;
}