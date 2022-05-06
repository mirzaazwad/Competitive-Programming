#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int k,r;
    cin>>k>>r;
    for(int i=1;i<=1000;i++)
    {
        int numberOfShovels=k*i;
        if(numberOfShovels%10==0 || (numberOfShovels-r)%10==0){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}