#include <bits/stdc++.h>
using namespace std;
//In The Name Of Allah
//The Lord Of Mercy, The Giver Of Mercy
//Which of Allah's blessings can you deny?
typedef long long ll;
#define endl "\n"
#define all(v) v.begin(),v.end()

ll countGoodSubsequences(vector<ll>arr, int n)
{
 
    vector<pair<ll, ll> > next(n);
    vector<pair<ll, ll> > next_to_next(n);
 
    int f = -1;
    int s = -1;
 
    for (int i = n - 1; i >= 0; i--) {
        next[i].first = arr[i];
 
        next_to_next[i].first = arr[i];
 
        if (arr[i] % 2 == 0) {
            s = f;
            f = i;
        }
 

        next[i].second = f;
 

        next_to_next[i].second = s;
    }
 
    ll total = 0;
 
    for (int i = 0; i < n; i++) {
        int calculate;
 

        if (next[i].first % 4 == 0) {
            calculate = n - i;
 
            total += calculate;
        }
 

        else if (next[i].first & 1 == 1) {
 
            if (next[i].second == -1) {
                calculate = n - i;
 
                total += calculate;
            }
 
            else {

                if (next_to_next[i].second == -1
                 && next[next[i].second].first % 4 != 0)
 
                {
                    calculate = next[i].second - i;
                    total += calculate;
                }
 

                else if (next_to_next[i].second != -1
                         && next[next[i].second].first % 4 != 0) {
                    calculate = n - i;
                    total += calculate;
                    total -= next_to_next[i].second - next[i].second;
                }
 

                else {
                    calculate = n - i;
                    total = total + calculate;
                }
            }
        }
 

        else {

            if (next_to_next[i].second == -1)
                total = total;
 

            else {
                calculate = n - i;
                total += calculate;
                total = total - next_to_next[i].second + i;
            }
        }
    }
 
    return total;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll &i : a)
        cin >> i;
    cout << countGoodSubsequences(a,n) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}