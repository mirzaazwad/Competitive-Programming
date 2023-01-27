#include <bits/stdc++.h>

#define fastio                        \
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
    
    while(t--)
    {
      int n;
      cin>>n;
       vector<int>pos(n+1);
       for(int i=1;i<=n;i++){
        int ix;
        cin>>ix;
        pos[ix]=i;
       }
       int i,j;
       int midf=(n+1)/2;
        int mide=(n+1)/2+(n+1)%2;
        i=midf,j=mide;
        while(i >= 1 and j <= n)
        {
            if(pos[i] <= pos[midf] and pos[j] >= pos[mide] and pos[i] <= pos[j])
            {
                midf = i, mide = j;
                i--,j++;
            }
            else break;
        }
       cout<<(n - (j-i-1))/2<<endl;
    }
    return 0;
}