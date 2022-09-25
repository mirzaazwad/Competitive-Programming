#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define endl "\n"

class Solution{
    private:
    int n;
    string s;
    vector<bool>flag;
    public:
    Solution(int t)
    {
        for(int i=1;i<=t;i++){
            
            int n;
            cin>>n;
            cin>>s;
            resize_flag(n);
            cout<<mil_ja_sim_sim(n)<<endl;
        }
    }

    void resize_flag(int n){
        flag.clear();
        vector<bool>temp(n+1,false);
        flag=temp;
    }


    ll mil_ja_sim_sim(int n){
        for(int i=1;i<=n;i++){
            flag[i]=(s[i-1]=='0');
        }
        vector<ll>cost(n+1,0);
        for(int i=n;i>0;i--){
            for(int j=i;j<=n;j+=i){
                if(!flag[j])break;
                cost[j]=i;
            }
        }
        return accumulate(cost.begin(),cost.end(),0LL);
    }
};


int main(void){
    fastio
    int t;
    cin>>t;
    Solution solve=Solution(t);
}