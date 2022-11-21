#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long

using namespace std;

bool isValley(vector<ll> arr, int n)
{
    vector<ll> shrink;
    shrink.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            continue;
        }
        else
        {
            shrink.push_back(arr[i]);
        }
    }
    int siz = shrink.size();
    if(n==1){
        return true;
    }
    if(siz==1){
        return true;
    }
    int count = 0;
    if (shrink[0] < shrink[1])
        count++;
    if (shrink[siz - 1] < shrink[siz - 2])
        count++;
    if(n==2){
        return count==1;
    }
    for (int i = 1; i < siz - 1; i++)
    {
        if (shrink[i] < shrink[i - 1] && shrink[i] < shrink[i + 1])
            count++;
    }
    return count == 1;
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (ll &i : arr)
    {
        cin >> i;
    }
    if(isValley(arr, n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}