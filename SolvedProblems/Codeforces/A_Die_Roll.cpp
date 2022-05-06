#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int Y,W,D;
    cin>>Y>>W;
    int possibilities=6-max(Y,W)+1;
    cout<<possibilities/__gcd(possibilities,6)<<"/"<<6/__gcd(possibilities,6)<<endl;
    return 0;
}