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
    ll sum=(n*(n+1))/2;
    vector<ll>s1,s2;
    ll sum1=0,sum2=0;
    if(sum%2){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=n;i>0;i--){
        if(sum1+i<=sum/2){
            sum1+=i;
            s1.push_back(i);
        }
        else{
            sum2+=i;
            s2.push_back(i);
        }
    }   
    cout<<"YES"<<endl;
    cout<<s1.size()<<endl;
    for(int i=0;i<s1.size();i++){
        cout<<s1[i]<<" ";
    }
    cout<<endl;
    cout<<s2.size()<<endl;
    for(int i=0;i<s2.size();i++){
        cout<<s2[i]<<" ";
    }
    cout<<endl;
    return 0;
}