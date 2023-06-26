#include <iostream>
#include <vector>
#include <string>

using namespace std;

// vector<int> computeLPS(string pattern) {
//     int n = pattern.length();
//     vector<int> lps(n, 0);
//     int len = 0, i = 1;
//     while (i < n) {
//         if (pattern[i] == pattern[len]) {
//             len++;
//             lps[i] = len;
//             i++;
//         }
//         else {
//             if (len != 0) {
//                 len = lps[len - 1];
//             }
//             else {
//                 lps[i] = 0;
//                 i++;
//             }
//         }
//     }
//     return lps;
// }

vector<int> computeLPSArray(string pat, int M)
{
    // length of the previous longest prefix suffix
    int len = 0;
    vector<int>lps(M);
    lps[0] = 0; // lps[0] is always 0
 
    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0) {
                len = lps[len - 1];
 
                // Also, note that we do not increment
                // i here
            }
            else // if (len == 0)
            {
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
    vector<int> lps = computeLPSArray(pattern,pattern.length());
    for (int i = 0; i < lps.size(); i++) {
        cout << lps[i] << " ";
    }
    return 0;
}