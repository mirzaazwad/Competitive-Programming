#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

class Solution{
    private:
    int n;
    vector<ll>arr;
    public:
    Solution(int t)
    {
        for(int i=1;i<=t;i++){
            
            int n;
            cin>>n;
            resize_array(n);
            cout<<mil_ja_sim_sim(n)<<endl;
        }
    }

    void resize_array(int n){
        arr.clear();
        vector<ll>temp(n);
        arr=temp;
    }

    ll mil_ja_sim_sim(int n){
        int value1(0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        ll Min=LLONG_MAX;
        for(int i=1;i<n-1;i++){
            if(abs(arr[i]-arr[i-1])+abs(arr[i+1]-arr[i])<Min){
                Min=abs(arr[i]-arr[i-1])+abs(arr[i+1]-arr[i]);
            }
        }
        return Min;

        
    }
};


int main(void){
    int t;
    cin>>t;
    Solution solve=Solution(t);
}