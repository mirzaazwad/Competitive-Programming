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
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

namespace Problem
{
    class Program
    {
    private:
        int n;
        string s;
        vector<ll> xsq;
        vector<ll> ysq;
        ll xcount = 0, ycount = 0;
        ll xsqCount = 0, ysqCount = 0;

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
            cin >> s;
            xsq.resize(n);
            ysq.resize(n);
            xcount = 0;
            ycount = 0;
            xsqCount = 0;
            ysqCount = 0;
        }

        void clearSpace()
        {
            s.clear();
            n = 0;
            xsq.clear();
            ysq.clear();
        }

        void solve()
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    xcount++;
                    xsqCount++;
                    ysqCount = 0;
                }
                else
                {
                    ycount++;
                    ysqCount++;
                    xsqCount = 0;
                }
                xsq[i] = xsqCount * xsqCount;
                ysq[i] = ysqCount * ysqCount;
            }
            ll Max = xcount * ycount;
            for (int i = 0; i < n; i++)
            {
                Max = max(xsq[i], max(ysq[i], Max));
            }
            cout << Max << endl;
        }
    };
}
signed main()
{
    fastio;
    int tc;
    cin >> tc;
    Problem::Program program = Problem::Program(tc);
    return 0;
}