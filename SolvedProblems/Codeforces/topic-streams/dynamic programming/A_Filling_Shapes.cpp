#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    int fr[n+1]={0};
    fr[1]=0;
    fr[0]=1;
    for(int i=2;i<=n;i++){
      fr[i]=2*fr[i-2];
    }
    cout<<fr[n]<<endl;
    return 0;
}