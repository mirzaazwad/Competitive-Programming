// In the name of Allah, The Lord of Mercy, The Giver of Mercy
// Author: Mirza Mohammad Azwad
// Institution: Islamic University of Technology
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll int64_t
#define Short int16_t
#define Int int32_t
#define endl "\n"

using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

namespace Problem
{
    class Program
    {
    private:
        vector<ll> a;
        int n;

    public:
        Program(Int t)
        {
            for (Int i = 1; i <= t; i++)
            {
                takeInput();
                solve();
                clearSpace();
            }
        }

        void takeInput()
        {
            cin >> n;
            vector<ll> temp(n);
            a = temp;
            for (ll &i : a)
            {
                cin >> i;
            }
        }

        void clearSpace()
        {
            a.clear();
            n = 0;
        }

        bool isStrictlyIncreasing(vector<ll> arr, int n)
        {
            for (int i = 1; i < n; i++)
            {
                if (arr[i - 1] >= arr[i])
                {
                    return false;
                }
            }
            return true;
        }

        void solve()
        {
            sort(a.begin(), a.end());
            if (isStrictlyIncreasing(a, n))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    };
}
signed main()
{
    fastio;
    Int tc;
    cin >> tc;
    Problem::Program program = Problem::Program(tc);
    return 0;
}