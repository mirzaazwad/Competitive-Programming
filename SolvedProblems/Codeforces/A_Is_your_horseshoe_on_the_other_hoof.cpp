#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    set<int>uniqueHorsoshoes;
    for(int i=0;i<4;i++){
        int horseShoeColor;
        cin>>horseShoeColor;
        uniqueHorsoshoes.insert(horseShoeColor);
    }
    cout<<4-uniqueHorsoshoes.size()<<endl;
    return 0;
}