#include<bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);cout.tie(NULL)

int main() {
    fastio;
    string s; 
    int k;

    cin >> s >> k;

    sort(s.begin(), s.end());

    int count = 0;
    do {
        ++count;
        if (count == k) {
            cout << s << endl;
            break;
        }
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}
