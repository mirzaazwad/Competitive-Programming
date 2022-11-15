// In the name of Allah, The Lord of Mercy, The Giver of Mercy
// Author: Mirza Mohammad Azwad
// Institution: Islamic University of Technology
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4.2,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll int64_t
#define short int16_t
#define int int32_t
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
        ll N;
        int k;

    public:
        Program(int t = 1)
        {
            takeInput();
            solve();
            clearSpace();
        }

        void takeInput()
        {
            cin >> N >> k;
        }

        void clearSpace()
        {
        }
        void solve()
        {
            int pos_of_first_one=64-__builtin_clzll(N)+1+k;
            vector<bool> binary(pos_of_first_one, false);
            for (int i = 0; i < k; i++)
            {
                binary[i] = true;
            }
            ll Min = LLONG_MAX;
            ll res = 0;
            for (int i = 0; i < pos_of_first_one; i++)
            {
                if (binary[i])
                {
                    res += (1LL << i);
                }
            }
            if (res > N)
            {
                Min = min(Min, res);
                cout<<Min<<endl;
                return;
            }
            while (prev_permutation(binary.begin(), binary.end()))
            {
                res = 0;
                int count=0;
                for (int i = 0; i < pos_of_first_one; i++)
                {
                    if (binary[i])
                    {
                        count++;
                        res += (1LL << i);
                    }
                }
                cout<<endl;
                if (res > N)
                {
                    Min = min(Min, res);
                }
            }
            cout << Min << endl;
        }
    };
}
signed main()
{
    fastio;
    Problem::Program program = Problem::Program();
    return 0;
}