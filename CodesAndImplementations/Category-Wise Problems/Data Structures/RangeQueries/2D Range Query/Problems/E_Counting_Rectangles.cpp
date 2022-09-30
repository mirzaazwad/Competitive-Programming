#include "bits/stdc++.h"
using namespace std;
#define N 1008
#define ll long long



class twoDRangeQuery{
    private:
    long long bit[N][N], n;
    public:
    twoDRangeQuery(int value){
        n=value;
        memset(bit,0,sizeof(bit));
    }

    void update(int x, int y, int val) {
    for (; x < N; x += -x & x)
            for (int j = y; j < N; j += -j & j) bit[x][j] += val;
    }

    long long get(int x, int y) {
        long long ans = 0;
        for (; x; x -= x & -x)
            for (int j = y; j; j -= j & -j) ans += bit[x][j];
        return ans;
    }

    long long get(int x1, int y1, int x2, int y2) {
        return get(x2, y2) - get(x1 - 1, y2) - get(x2, y1 - 1) +
            get(x1 - 1, y1 - 1);
    }
    

};


class Solution{
    private:
    int t;
    public:
    Solution(int t,bool cs){
        for(int i=0;i<t;i++){
            solve();
        }
    }

    ll solve(){
        int n, q;
        cin >> n >> q;
        twoDRangeQuery query=twoDRangeQuery(n);

        for (int i = 1; i <= n; i++) {
            int x, y;
            cin >> x >> y;
            query.update(x, y, x * y);
        }

        for(int i=0;i<q;i++){
            int x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
            x1++,y1++;
            long long ans = 0;
            x2--, y2--;
            if (x2 >= x1 && y2 >= y1) ans += query.get(x1, y1, x2, y2);
            cout<<ans<<endl;
        }
        return 0;

    }
};


signed main() {
    int t;
    cin >> t;
    Solution solve=Solution(t,false);
    return 0;
}
