#include <bits/stdc++.h>
using namespace std;
// In The Name Of Allah
// The Lord Of Mercy, The Giver Of Mercy
// Which of Allah's blessings can you deny?
typedef long long ll;
#define endl "\n"
#define all(v) v.begin(), v.end()

class dsu
{
    private:
        int N;
        vector<int> par, siz;
        int root(int X)
        {
            if (par[X] == X)
                return X;
            return par[X] = root(par[X]);
        }

    public:
        dsu(int n) : N(n)
        {
            par.resize(N);
            siz.resize(N, 1);
            for (int i = 0; i < N; i++)
                par[i] = i;
        }
        
        bool rootMatch(int X, int Y)
        {
            return root(X) == root(Y);
        }
        void make_union(int X, int Y)
        {
            X = root(X);
            Y = root(Y);
            if (X == Y)
                return;
            if (siz[Y] < siz[X])
                swap(X, Y);
            par[X] = Y;
            siz[Y] += siz[X];
            siz[X] = 0;
        }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    
    dsu d(n + 1);

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        d.make_union(l - 1, r);
    }
    cout << (d.rootMatch(0, n)?"Yes":"No") << endl;
    return 0;
}