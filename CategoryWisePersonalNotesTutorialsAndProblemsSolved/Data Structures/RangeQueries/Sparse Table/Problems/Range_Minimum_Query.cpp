// In the name of Allah, The Lord of Mercy, The Giver of Mercy
// Author: Mirza Mohammad Azwad
// Institution: Islamic University of Technology
// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
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
    class RMQ
    {
    private:
        int SparseTable[17][100005];

    public:
        RMQ(vector<int> arr, int n)
        {
            copy(arr.begin(), arr.end(), SparseTable[0]);
            for (int i = 0; i < n; i++)
            {
            }
            for (int i = 1; (1 << i) < n; i++)
            {
                for (int j = 0; j + (1 << i) - 1 < n; j++)
                {
                    SparseTable[i][j] = min(SparseTable[i - 1][j], SparseTable[i - 1][j + (1 << (i - 1))]);
                }
            }
        }

        int query(int L, int R)
        {
            int j = (int)log2(R - L + 1);
            return min(SparseTable[j][L],SparseTable[j][R - (1 << j) + 1]);
        }

        void clear()
        {
            memset(SparseTable, 0, sizeof(SparseTable));
        }
    };

    //RMQ* rmq=neq RMQ(array,sizeOfArray)
    //rmq->clear() //clear current rmq
    //rmq->query(L,R) query from Left to Right

    class Program
    {
    private:
        int N; // size of array
        int q; // queries
        int l;//left
        int r;//right
        vector<int> arr;
        RMQ *rmq;

    public:
        Program(int t = 1)
        {
            for (int i = 1; i <= t; i++)
            {
                takeInput();
                clearSpace();
            }
        }

        void takeInput()
        {
            cin >> N;
            arr.resize(N);
            for (int &i : arr)
            {
                cin >> i;
            }
            rmq =new RMQ(arr, N);
            cin >> q;
            for (int i = 0; i < q; i++)
            {
                solve();
            }
        }

        void clearSpace()
        {
            arr.clear();
            rmq->clear();
        }
        void solve()
        {
            cin>>l>>r;
            cout << rmq->query(l, r) << endl;
        }
    };
}

signed main()
{
    fastio;
    Problem::Program program = Problem::Program();
    return 0;
}
