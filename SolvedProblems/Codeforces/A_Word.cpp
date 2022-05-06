#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string word;
    cin>>word;
    int wordLength=word.length();
    int uppercaseLetter=0,lowercaseLetter=0;
    for(int i=0; i<wordLength; i++){
        if(word[i]==tolower(word[i])){
            lowercaseLetter++;
        }
        else{//word[i]==toupper(word[i]) is the only remaining condition
            uppercaseLetter++;
        }
    }
    if(uppercaseLetter<lowercaseLetter){
        for(int i=0; i<wordLength; i++){
            word[i]=tolower(word[i]);
        }
    }
    else if(uppercaseLetter>lowercaseLetter){
        for(int i=0; i<wordLength; i++){
            word[i]=toupper(word[i]);
        }
    }
    else{
        for(int i=0; i<wordLength; i++){
            word[i]=tolower(word[i]);
        }
    }
    cout<<word<<endl;
    return 0;
}