// In the name of Allah, The Lord of Mercy, The Giver of Mercy
// Author: Mirza Mohammad Azwad
// Institution: Islamic University of Technology
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <iostream>
#define ll int64_t
#define short int16_t
#define int int32_t
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

namespace ProblemB
{
    class Program
    {
    private:
        int r;
        int high;
        int low;
        string reply;

    public:
        Program(int t = 1)
        {
            for (int i = 1; i <= t; i++)
            {
                takeInput();
                solve();
            }
        }

        void takeInput()
        {
            cin >> r;
            low = 1;
            high = r + 1;
        }

        void query(int i, int mid)
        {
            cout << i * mid << endl;
            cin >> reply;
        }

        void solve()
        {
            int i = 0;
            while (low < high)
            {
                i++;
                if (i == 85)
                {
                    break;
                }
                int mid = (high + low) / 2;
                query(i, mid);
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
                    return;
                }
            }
        }
    };
}
signed main()
{
    fastio;
    ProblemB::Program program = ProblemB::Program();
    return 0;
}