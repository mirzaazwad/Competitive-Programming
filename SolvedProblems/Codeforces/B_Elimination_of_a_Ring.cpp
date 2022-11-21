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
        vector<int> a;

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
            a.resize(n);
            for (int &i : a)
            {
                cin >> i;
            }
        }

        void clearSpace()
        {
        }
        void solve()
        {
            int oneGapElements = 0;
            int nonOneGapElements = 0;
            set<int>s;
            if (n == 1)
            {
                cout << 1 << endl;
                return;
            }
            bool visited[n] = {false};
            for (int i = 0; i < n; i++)
            {
                s.insert(a[i]);
                if (!visited[i] && !visited[(i + 2) % n])
                {
                    if (a[i] == a[(i + 2) % n])
                    {
                        oneGapElements++;
                    }
                    else
                    {
                        nonOneGapElements++;
                    }
                }
                visited[i] = true;
            }
            if(!nonOneGapElements && s.size()==2){
                cout<<n/2+1<<endl;
            }
            else{
                cout<<n<<endl;
            }
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