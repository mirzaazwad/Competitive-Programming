// In the name of Allah, The Lord of Mercy, The Giver of Mercy
// Author: Mirza Mohammad Azwad
// Institution: Islamic University of Technology
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

namespace Problem
{
    class Program
    {
    private:
        char grid[8][8];

    public:
        Program(int t)
        {
            for (int i = 1; i <= t; i++)
            {
                takeInput();
                solve();
            }
        }

        void takeInput()
        {
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    cin >> grid[i][j];
                }
            }
        }

        bool rowCheck()
        {
            for (int i = 0; i < 8; i++)
            {
                int Rcount = 0;
                for (int j = 0; j < 8; j++)
                {
                    if (grid[i][j] == 'R')
                    {
                        Rcount++;
                    }
                }
                if (Rcount == 8)
                {
                    cout << 'R' << endl;
                    return true;
                }
            }
            return false;
        }

        bool colCheck()
        {
            int Bcount[8];
            memset(Bcount, 0, sizeof(Bcount));
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    if (grid[i][j] == 'B')
                    {
                        Bcount[j]++;
                    }
                }
            }
            for (int i = 0; i < 8; i++)
            {
                if (Bcount[i] == 8)
                {
                    cout << 'B' << endl;
                    return true;
                }
            }
            return false;
        }

        void solve()
        {
            rowCheck();
            colCheck();
        }
    };
}
int main()
{
    fastio;
    int tc;
    cin >> tc;
    Problem::Program program = Problem::Program(tc);
    return 0;
}