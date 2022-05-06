#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    long long n,x;
    cin >> n >> x;
    long long distressedKids=0;
    for(int i=0; i<n; i++)
    {
        char sign;
        long long num;
        cin>>sign >>num;
        if(sign=='+')
        {
            x+=num;
        }
        else{
            if(x-num<0){
                distressedKids++;
            }
            else{
                x-=num;
            }
        }
    }
    cout<<x<<" "<<distressedKids<<endl;
    return 0;
}