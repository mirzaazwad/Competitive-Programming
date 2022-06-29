#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<long long>pos,neg,zero,nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>0)pos.push_back(x);
        else if(x<0)neg.push_back(x);
        else zero.push_back(x);
    }
    if(pos.size()>2 || neg.size()>2){
        cout<<"NO"<<endl;
        return;
    }
    while(zero.size()>2){
        zero.pop_back();
    }
    nums.insert(nums.end(),pos.begin(),pos.end());
    nums.insert(nums.end(),neg.begin(),neg.end());
    nums.insert(nums.end(),zero.begin(),zero.end());
    unordered_set<long long>s;
    n=nums.size();
    for(int i=0;i<n;i++){
        s.insert(nums[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(i!=j && j!=k && i!=k){
                    if(s.find(nums[i]+nums[j]+nums[k])==s.end()){
                        cout<<"NO"<<endl;
                        return;
                    }
                }
            }
        }
    }
    cout<<"YES"<<endl;


}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       solve();
    }
    return 0;
}