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

    class BinaryArrayLL
    {
    private:
        vector<bool> binary;

    public:
        BinaryArrayLL(ll n)
        {
            binary.assign(65, 0);
            int i = 0;
            while (n > 0)
            {
                binary[i++] = (n % 2 == 1);
                n /= 2;
            }
        }

        ll toInt64()
        {
            ll res = 0;
            for (ll i = 0; i < 65; i++)
            {
                if (binary[i])
                    res += (1LL << i);
            }
            return res;
        }

        bool get(int i)
        {
            return binary[i];
        }

        void set(int i, bool input)
        {
            binary[i] = input;
            return;
        }

        int SetCount(int start)
        {
            int Counter = count(binary.begin() + start, binary.end(), true);
            return Counter;
        }
    };

    class Program
    {
    private:
        ll n;
        int k;
        BinaryArrayLL *binary;

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
            cin >> n >> k;
            binary = new BinaryArrayLL(n);
        }

        void clearSpace()
        {
            n = 0, k = 0;
        }

        void solve()
        {
            int oneCount = binary->SetCount(0);
            if (oneCount < k)
            {
                int i = 0;
                int j = 0;
                while (i < k - oneCount && j < 65)
                {
                    if (!binary->get(j))
                    {
                        i++;
                        binary->set(j, true);
                    }
                    j++;
                }
            }
            else
            {
                int i = 0;
                for (i; i < 65 && oneCount > k - 1; i++)
                {
                    if (binary->get(i))
                        binary->set(i, false), oneCount--;
                }
                while (binary->get(i))
                {
                    i++;
                }
                binary->set(i, true);
                oneCount = binary->SetCount(i);
                for (int j = 0; j < i; j++)
                {
                    binary->set(j, false);
                }
                int j = 0;
                while (oneCount < k && j<65)
                {
                    if (!binary->get(j))
                    {
                        binary->set(j, true);
                        oneCount++;
                    }
                    j++;
                }
            }
            cout << binary->toInt64() << endl;
        }
    };
}
signed main()
{
    fastio;
    Problem::Program program = Problem::Program();
    return 0;
}