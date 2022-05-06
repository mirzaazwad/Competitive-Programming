#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool isPangram(string word, int n)
{ 
    bool alphabets[26];
    memset(alphabets, 0, sizeof(alphabets));
    for(int i=0;i<n;i++)
    {
        word[i] =tolower(word[i]);
        alphabets[word[i]-'a']=true;
    }
    for(int i=0;i<26;i++)
    {
        if(!alphabets[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    fastio;
    int n;
    cin >> n;
    string word;
    cin >> word;
    if(isPangram(word,n))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}