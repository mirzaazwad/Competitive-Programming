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
    int minRotations=0;
    int nameLength=name.length();
    int position=(int)name[0]-97;
    int rotation=min(position,26-position);
    minRotations+=rotation;
    for(int i=1;i<nameLength;i++){
        int prevPosition=(int)name[i-1]-97;
        position=(int)name[i]-97;
        rotation=min(abs(prevPosition-position),abs(26-abs(prevPosition-position)));
        minRotations+=rotation;
    }
    cout<<minRotations<<endl;
    return 0;
}