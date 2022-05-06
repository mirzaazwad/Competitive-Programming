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
    deque<int> programming,math,PE;
    for(int i=0; i<n; i++)
    {
        int childValue;
        cin>>childValue;
        switch(childValue)
        {
            case 1:
            programming.push_back(i+1);
            break;
            case 2:
            math.push_back(i+1);
            break;
            case 3:
            PE.push_back(i+1);
            break;
        }
    }
    sort(programming.begin(), programming.end());
    sort(math.begin(), math.end());
    sort(PE.begin(), PE.end());
    int numberOfTeams=min(programming.size(),min(math.size(),PE.size()));
    cout<<numberOfTeams<<endl;
    for(int i=0; i<numberOfTeams; i++){
        cout<<programming.front()<<" "<<math.front()<<" "<<PE.front()<<endl;
        programming.pop_front();
        math.pop_front();
        PE.pop_front();
    }

    return 0;
}