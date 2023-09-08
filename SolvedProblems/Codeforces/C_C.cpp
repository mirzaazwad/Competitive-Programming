#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"
#define all(v) v.begin(),v.end()

ll calculateSum(const vector<ll>& a, ll b) {
    int n = a.size();
    ll sum = 0;

    for (int i = 1; i < n; ++i) {
        sum += abs(a[i] - (b + i));
    }

    return sum;
}

ll findMinimumSum(const vector<ll>& a) {
    ll low = -1e9+7;
    ll high = 1e9+7;
    int n = a.size();

    // Find the range for 'b'
    for (int i = 1; i < n; ++i) {
        low = min(low, a[i] - i);
        high = max(high, a[i] - i);
    }

    while (low < high) {
        int mid = low + (high - low) / 2;
        int midSum = calculateSum(a, mid);
        int nextSum = calculateSum(a, mid + 1);

        if (midSum < nextSum) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    return calculateSum(a, low);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    cout<<findMinimumSum(a)<<endl;

    return 0;
}
