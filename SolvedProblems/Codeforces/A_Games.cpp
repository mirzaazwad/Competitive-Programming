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
    pair<int,int>uniformColor[n];//first home uniform second guest uniform
    for(int i=0;i<n;i++)
    {
        cin>>uniformColor[i].first>>uniformColor[i].second;
    }
    int guestUnifromByHost=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(uniformColor[i].first==uniformColor[j].second)
                {
                    guestUnifromByHost++;
                }
            }
        }
    }
    cout<<guestUnifromByHost<<endl;
    return 0;
}