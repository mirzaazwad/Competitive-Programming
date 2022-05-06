#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string setOfLetters;
    getline(cin, setOfLetters);
    int sizeOfsetOfLetters = setOfLetters.size();
    set<char>distinctLetters;
    for (int i = 0; i < sizeOfsetOfLetters;i++){
        if(setOfLetters[i]>='a' && setOfLetters[i]<='z'){
            distinctLetters.insert(setOfLetters[i]);
        }
    }
    cout << distinctLetters.size() << endl;
    return 0;
}