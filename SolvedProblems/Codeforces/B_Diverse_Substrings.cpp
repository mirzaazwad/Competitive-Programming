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
        string nums;

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
            cin >> nums;
        }

        void clearSpace()
        {
            nums.clear();
        }

        void solve()
        {
            int ans=0;
            int length=nums.size();
            for(int i=0;i<length;i++){
                int unique=0;
                ll Max=INT_MIN;
                vector<ll>frequency(10,0);
                for(int j=i;j<length;j++){
                    frequency[nums[j]-'0']++;
                    if(frequency[nums[j]-'0']>10){
                        break;
                    }
                    if(frequency[nums[j]-'0']==1){
                        unique++;
                    }
                    Max=max(Max,frequency[nums[j]-'0']);
                    if(unique>=Max)ans++;
                }
            }
            cout<<ans<<endl;
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