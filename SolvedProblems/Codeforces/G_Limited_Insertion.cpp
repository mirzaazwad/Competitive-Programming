#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    vector<int> res;
    int r = n;
    while (r)
    {
        int tmp = r;
        for (int i = r; i >= 1; i--)
        {
            if (a[i] == i)
            {
                res.push_back(i);
                for (int j = i; j < r; j++)
                {
                    a[j] = a[j + 1];
                }
                r--;
                break;
            }
        }
        
        if (tmp == r)
        {
            break;
        }
    }
    
    if (r > 0)
    {
        cout << -1 << endl;
    }
    else
    {
        reverse(res.begin(), res.end());
        for (auto u : res)
        {
            cout << u << endl;
        }
    }

    return 0;
}
