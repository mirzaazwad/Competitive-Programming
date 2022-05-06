#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    while (n--){
        string word;
        cin>>word;
        int word_len = word.length();
        if(word_len>10){
            cout<<word.front()<<word_len-2<<word.back()<<endl;
        }
        else{
            cout<<word<<endl;
        }
    }
    return 0;
}