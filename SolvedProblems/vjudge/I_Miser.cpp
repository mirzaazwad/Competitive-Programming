#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;


unsigned long long int findlcm(vector<ll>arr, int n)
{

    ll max_num = 0;
    for (int i=0; i<n; i++)
        if (max_num < arr[i])
            max_num = arr[i];
 

    unsigned long long int res = 1;
 
    ll x=2;
    while (x <= max_num)
    {

        vector<ll> indexes;
        for (int j=0; j<n; j++)
            if (arr[j]%x == 0)
                indexes.push_back(j);
 

        if (indexes.size() >= 2)
        {

            for (int j=0; j<indexes.size(); j++)
                arr[indexes[j]] = arr[indexes[j]]/x;
 
            res = res * x;
        }
        else
            x++;
    }
 
    for (int i=0; i<n; i++)
        res = res*arr[i];
 
    return res;
}
 


void solve() {
    int n;
    cin>>n;
    vector<ll>m(n);
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    ll lcm = findlcm(m,n);
    cout<<35*lcm<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int i=0;
    while (t--) {
        cout<<"Case "<<++i<<": ";
        solve();
    }

    return 0;
}