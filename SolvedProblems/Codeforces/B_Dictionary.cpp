#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       string x;
       cin >> x;
       int ix=x[0]-'a';
       ix*=25;
       ix+=(x[1]-'a');
       if(x[1]<x[0])ix++;
       cout <<ix<<endl;

    }
    return 0;
}