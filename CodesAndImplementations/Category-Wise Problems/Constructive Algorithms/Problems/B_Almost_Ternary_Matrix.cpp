#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void solve(void){
   int n,m; cin >> n >> m;
   for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
        int x = (i/2 + j/2)%2;
        if((i+j)%2 != 1){
            x ^= 1;
        }
        cout << x << " ";
     }
     cout << "\n";
   }
} 

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       solve();
    }
    return 0;
}