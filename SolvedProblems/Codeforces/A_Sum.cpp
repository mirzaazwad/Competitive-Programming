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
        int a, b, c;

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
            cin >> a >> b >> c;
        }

        void clearSpace()
        {
            a = 0;
            b = 0;
            c = 0;
        }
        void solve()
        {
            if (a == (b + c) || b == (a + c) || c == (a + b))
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