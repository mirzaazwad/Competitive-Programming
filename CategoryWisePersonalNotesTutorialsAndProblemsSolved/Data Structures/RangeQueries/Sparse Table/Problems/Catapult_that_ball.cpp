// In the name of Allah, The Lord of Mercy, The Giver of Mercy
// Author: Mirza Mohammad Azwad
// Institution: Islamic University of Technology
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
    class RangeMaximumQuery
    {
    private:
        ll SparseTable[16][50002];

    public:
        RangeMaximumQuery(vector<ll> arr, int n)
        {
            clear();
            copy(arr.begin(), arr.end(), SparseTable[0]);
            for (int i = 1; (1 << i) < n; i++)
            {
                for (int j = 0; j + (1 << i) - 1 < n; j++)
                {
                    SparseTable[i][j] = max(SparseTable[i - 1][j], SparseTable[i - 1][j + (1 << (i - 1))]);
                }
            }
        }

        ll query(int L, int R)
        {
            int j = (int)log2(R - L + 1);
            return max(SparseTable[j][L], SparseTable[j][R - (1 << j) + 1]);
        }

        void clear()
        {
            memset(SparseTable, 0, sizeof(SparseTable));
        }
    };

    class Program
    {
    private:
        int N, M;
        vector<ll> H;
        int A, B;
        RangeMaximumQuery *rmq;
        int ans;

    public:
        Program(int t = 1)
        {
            ans = 0;
            for (int i = 1; i <= t; i++)
            {
                takeInput();
            }
        }

        void takeInput()
        {
            cin >> N >> M;
            H.resize(N + 1);
            for (int i = 1; i <= N; i++)
            {
                cin >> H[i];
            }
            rmq = new RangeMaximumQuery(H, N + 1);
            for (int i = 0; i < M; i++)
            {
                cin >> A >> B;
                solve(min(A,B), max(A,B));
            }
            cout << ans << endl;
        }

        void clearSpace(){
            H.clear();
        }

        void solve(int A, int B)
        {

            if (abs(A - B) <= 1)
            {
                ans++;
            }
            else
            {
                ll query = rmq->query(A + 1, B - 1);
                if (query <= H[A])
                {
                    ans++;
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