#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
typedef long long ll;
using namespace std;

int main()
{
    fastio;
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++){
        ll k=i;
        //for a k*k chessboard, the number of ways 2 knights can be placed such that they don't attack each other
        //is given by the formula: (k^2)*(k^2-1)/2 - 4*(k-1)*(k-2)
        //the first term is the total number of ways 2 knights can be placed on a k*k chessboard
        //the second term is the number of ways 2 knights can be placed such that they attack each other
        //the second term is calculated by considering the 2*3 and 3*2 chessboards and multiplying them by 8
        //since there are 8 ways to place 2 knights on a 2*3 or 3*2 chessboard such that they attack each other
        //the 2*3 and 3*2 chessboards are subtracted from the k*k chessboard to get the number of ways 2 knights
        //can be placed on a k*k chessboard such that they don't attack each other
        ll ans=(k*k)*(k*k-1)/2 - 4*(k-1)*(k-2);
        cout<<ans<<endl;
    }
    return 0;
}