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
        ll l, r, x;
        ll a, b;

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
            cin >> l >> r >> x;
            cin >> a >> b;
        }

        void solve()
        {
            ll differ = abs(max(a, b) - min(a, b));
            if (differ == 0)
            {
                cout << 0 << endl;
                
            }
            else if (differ >= x)
            {
                cout << 1 << endl;
                
            }
            else
            {
                if (a - x < l && a + x > r)
                {
                    cout << -1 << endl;
                    
                }
                else if (a < b)
                {
                    if (a + differ + x <= r)
                    {
                        cout << 2 << endl;
                        
                    }
                    else
                    {
                        if (a - l >= x)
                        {
                            cout << 2 << endl;
                            
                        }
                        else if (r - b < x && b - l < x)
                        {
                            cout << -1 << endl;
                            
                        }
                        else
                        {
                            cout << 3 << endl;
                            
                        }
                    }
                }
                else if(a>b)
                {
                    if (a - differ - x >= l)
                    {
                        cout << 2 << endl;
                        
                    }
                    else
                    {
                        if (r - a >= x)
                        {
                            cout << 2 << endl;
                            
                        }
                        else if (r - b < x && b - l < x)
                        {
                            cout << -1 << endl;
                            
                        }
                        else
                        {
                            cout << 3 << endl;
                            
                        }
                    }
                }
                else{
                    cout<<0<<endl;
                }
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