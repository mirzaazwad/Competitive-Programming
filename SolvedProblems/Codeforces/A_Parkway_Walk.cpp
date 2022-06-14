#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       int n;
       cin >> n;
       int m;
       cin >> m;
       int arr[n];
       for(int i = 0; i < n; i++){
        cin>>arr[i];
       }
       int energy=0;
       for(int i = 0; i < n; i++){
        if(m-arr[i]<0){
            energy+=abs(m-arr[i]);
            m=0;
        }
        else{
            m-=arr[i];
        }
       }
       cout << energy << endl;
    }
    return 0;
}