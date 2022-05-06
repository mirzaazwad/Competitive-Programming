#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n,b,d;
    cin >> n >> b >> d;
    vector<int>oranges;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        if(a<=b){
            oranges.push_back(a);
        }
    }
    n=oranges.size();
    int total_size=0;
    int waste_disposal=0;
    for (int i = 0; i < n; i++){
        total_size+=oranges[i];
        if(total_size>d){
            total_size=0;
            waste_disposal++;
        }
    }
    cout<<waste_disposal<<endl;
    return 0;
}