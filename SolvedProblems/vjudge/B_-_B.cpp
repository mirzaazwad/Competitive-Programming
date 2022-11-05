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
        int r;
        string reply;

    public:
        Program(int t = 1)
        {
            for (int i = 1; i <= t; i++)
            {
                solve();
            }
        }

        void takeInput(int i, int mid)
        {
            cout << i * mid << endl;
            cin >> reply;
        }

        void solve()
        {
            int low = 1;
            int high = r + 1;
            int i = 0;
            cin >> r;
            while (low < high && ++i < 85)
            {
                int mid = (high + low) / 2;
                takeInput(i, mid);
                if (reply == "less")
                {
                    high = mid;
                }
                else if (reply == "more")
                {
                    low = mid;
                }
                else
                {
                    exit(0);
                }
            }
        }
    };
}
signed main()
{
    fastio;
    Problem::Program program = Problem::Program();
    return 0;
}