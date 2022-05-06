#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

vector<char> letter_gen(){
    vector<char> letters;
    for(int i=97;i<=122;i++){
        letters.push_back((char)i);
    }
    return letters;
}

int main()
{
    fastio;
    int len,distinct;
    cin>>len>>distinct;
    vector<char>letters=letter_gen();
    vector<char>ans;
    int distinctCount=0;
    for(int i=0;i<len;i++) {
        if(distinctCount<distinct){
            ans.push_back(letters[distinctCount++]);
        }
        else{
            distinctCount=0;
            ans.push_back(letters[distinctCount++]);
        }
    }
    len=ans.size();
    while(true){
        bool found=false;
        for(int i=1;i<len;i++){
            if(ans[i]==ans[i-1]){
                found=true;
                break;
            }
        }
        if(found){
            next_permutation(ans.begin(),ans.end());
            continue;
        }
        else{
            break;
        }
    }
    for(int i=0;i<len;i++){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}