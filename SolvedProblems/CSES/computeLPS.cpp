#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> computeLPS(string pattern) {
    int n = pattern.length();
    vector<int> lps(n, 0);
    int len = 0, i = 1;
    while (i < n) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {
            if (len != 0) {
                len = lps[len - 1];
            }
            else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

int main() {
    string pattern;
    cin>>pattern;
    vector<int> lps = computeLPS(pattern);
    for (int i = 0; i < lps.size(); i++) {
        cout << lps[i] << " ";
    }
    return 0;
}