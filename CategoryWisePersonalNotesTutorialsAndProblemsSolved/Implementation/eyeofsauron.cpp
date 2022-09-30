#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s;
    cin>>s;
    int left(0),right(0);
    int len=s.length();
    bool found=false;
    int vall=0,valr=0;
    for(int i=0;i<len;i++){
        if(s[i]=='(')vall++;
        if(s[i]==')')valr++;
        if(s[i]=='('||s[i]==')'){
            found=true;
            continue;
        }
        if(!found){
            left++;
        }
        else right++;

    }
    if(left==right && vall==valr && vall==1){
        cout<<"correct"<<endl;
    }
    else{
        cout<<"fix"<<endl;
    }
    return 0;
}