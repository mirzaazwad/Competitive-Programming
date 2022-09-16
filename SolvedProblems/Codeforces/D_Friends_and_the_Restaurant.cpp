#include<bits/stdc++.h>
using namespace std;
#define ll long long
//In the name of Allah, the Lord of Mercy, the Giver of Mercy

class Solution{
    private:
    int n;
    vector<ll>x,y,difference;
    public:
    Solution(int t){
        for(int i=1;i<=t;i++){
            x.clear(),y.clear(),difference.clear();
            n=0;
            solve();
        }
    }

    void solve(){
        cin>>n;
        for(int i=0;i<n;i++){
            ll num;cin>>num;
            x.push_back(num);
        }
        for(int i=0;i<n;i++){
            ll num;cin>>num;
            y.push_back(num);
        }
        for(int i=0;i<n;i++){
            difference.push_back(y[i]-x[i]);
        }
        sort(difference.rbegin(),difference.rend());
        int j=n-1;
        int i=0;
        int count=0;
        while (i < n){
                while(difference[i]+difference[j]<0 && j>i){
                    j--;
                }
                if(j<=i)break;
                count++;
                j--;
                i++;
        }
        cout<<count<<endl;
    }
};

int main(void){
    int t;
    cin >> t;
    Solution solve=Solution(t);
}