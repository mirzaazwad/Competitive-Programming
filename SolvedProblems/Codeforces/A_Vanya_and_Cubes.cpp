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
    int i;
    //the difference is non-constant so we follow the method I described in README.md to find the sum of the sequence for i
    //if sum exceeds n that is the ansswer
    for(i=1;i<=n;i++){
        long long sum=i*(i+1)*(2*i+4);
        sum/=12;
        if(sum>n){
            break;
        }
    }
    cout<<i-1<<endl;

    return 0;
}