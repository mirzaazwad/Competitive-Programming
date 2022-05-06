#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string name;
    cin>>name;
    set<char>charactersOfName;
    int stringlen=name.length();
    for(int i=0;i<stringlen;i++){
        charactersOfName.insert(name[i]);
    }
    if((int)charactersOfName.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}