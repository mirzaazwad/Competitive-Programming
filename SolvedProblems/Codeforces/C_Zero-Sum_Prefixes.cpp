// In the name of Allah, The Lord of Mercy, The Giver of Mercy
// Author: Mirza Mohammad Azwad
// Institution: Islamic University of Technology
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll int64_t
#define short int16_t
#define int int32_t
#define endl "\n"

using namespace std;
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

namespace Problem
{
    class Program
    {
    private:
        int n;
        vector<ll> arr;
        vector<ll> prefix;
        vector<ll> zeros;

    public:
        Program(int t = 1)
        {
            for (int i = 1; i <= t; i++)
            {
                takeInput();
                solve();
                clearSpace();
            }
        }

        void takeInput()
        {
            cin >> n;
            arr.resize(n);
            prefix.resize(n);
            for (int i = 0; i < n; i++)
            {
                cin>>arr[i];
                if (!arr[i])
                {
                    zeros.push_back(i);
                }
            }
            zeros.push_back(n);//deals with the no zero case
            partial_sum(arr.begin(),arr.end(),prefix.begin());
        }

        void clearSpace()
        {
            arr.clear();
            zeros.clear();
            prefix.clear();
        }
        void solve()
        { 
            int lenZero = zeros.size();
            int ans;
            ans=count(prefix.begin(),prefix.begin()+zeros.front(),0);//iterator end means it stops at end-1;
            for (int i = 0; i+1 < lenZero; i++)
            {
                map<ll, int> mp;
                int MaxCount = 0;
                for (int j = zeros[i]; j < zeros[i + 1]; j++)
                {
                    mp[prefix[j]]++;
                    MaxCount = max(MaxCount, mp[prefix[j]]);
                }
                ans += MaxCount;
            }
            cout << ans<< endl;
        }
    };
}
signed main()
{
    Fast_IO;
    int tc;
    cin >> tc;
    Problem::Program program = Problem::Program(tc);
    return 0;
}