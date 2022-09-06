/*
*Author: Mirza Mohammad Azwad
*Institude: Islamic University of Technology
In the name of Allah, the Lord of Mercy, the Giver of Mercy
*/
#include <bits/stdc++.h> 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
using namespace std;
 
#define ll long long
#define endl "\n"
 

class solution{
    public:
    solution(int t,bool cs){
        for(int i=1;i<=t;i++){
            if(cs)cout<<"Case "<<i<<": ";
            solve();
        }
    }

    bool isPossible(vector<ll>& stalls, ll minDist,int k,int n){
        int cows=1;
        int lastCowPosition=stalls[0];
        for(int i=0;i<n;i++){
            if(stalls[i]-lastCowPosition>=minDist){
                cows++;
                lastCowPosition=stalls[i];
                if(cows>=k)return true;
            }
        }
        return false;
    }

    int aggressiveCows(vector<ll>& stalls,int n,int k){
        sort(stalls.begin(),stalls.end());
        int low=0,high=stalls[n-1]-stalls[0];
        int res;
        while(high-low>=0){
            int mid=(low+high)/2;
            if(isPossible(stalls,mid,k,n)){
                res=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return res;
    }

    void solve(){
        int n,c;
        cin>>n>>c;
        vector<ll>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<aggressiveCows(arr,n,c)<<endl;
        
    }
};

int main(void){
    int t;
    cin>>t;
    solution solve=solution(t,false);
}