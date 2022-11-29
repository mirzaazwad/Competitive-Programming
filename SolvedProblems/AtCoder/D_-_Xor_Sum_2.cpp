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
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

namespace Problem
{
    class Program
    {
    private:
        int n;
        long long input;
        vector<long long> prefix_xor, prefix_sum;

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
            prefix_sum.resize(n), prefix_xor.resize(n);
            for (int i = 0; i < n; i++)
            {
                cin >> input;
                if (i == 0)
                {
                    prefix_sum[i] = input;
                    prefix_xor[i] = input;
                }
                else
                {
                    prefix_sum[i] = prefix_sum[i - 1] + input;
                    prefix_xor[i] = prefix_xor[i - 1] ^ input;
                }
            }
        }

        void clearSpace()
        {
            prefix_sum.clear();
            prefix_xor.clear();
        }
        void solve()
        {
            int l = 0;
            int r = 0;
            long long counter = 0;
            while (l <= r)
            {
                long long sum = prefix_sum[r];
                long long XOR = prefix_xor[r];
                if (l)
                {
                    sum -= prefix_sum[l - 1];
                    XOR ^= prefix_xor[l - 1];
                }
                if (sum == XOR)
                {
                    counter += (r - l + 1);
                    r++;
                }
                else
                {
                    l++;
                }
                if (l == n || r == n)
                {
                    break;
                }
            }
            cout << counter << endl;
        }
    };
}
int main(void)
{
    fastio;
    Problem::Program program = Problem::Program();
    return 0;
}