#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

//In the name of Allah, the Lord of Mercy, the Giver of Mercy

class Solution{
    private:
    string s;
    public:

    Solution(int t){
        for(int i=1;i<=t;i++){
            JustWork();
        }
    }

    void JustWork(){
        cin>>s;
        char start=s.front();
        char stop=s.back();
        int n=s.length();
        vector<pair<char,int>>filterString;
        char begins=min(s.front(),s.back());
        char ends=max(s.front(),s.back());
        for(int i=0;i<n;i++){
            if(i==0 || i==n-1)filterString.push_back({s[i],i+1});
            else{
                if(s[i]>=begins && s[i]<=ends){
                    filterString.push_back({s[i],i+1});
                }
            }
        }
        if(s.front()>s.back()){
            sort(filterString.begin()+1,filterString.end()-1,greater<pair<char,int>>());
        }
        else{
            sort(filterString.begin()+1,filterString.end()-1);
        }
        int siz=filterString.size();
        int cost=0;
        for(int i=1;i<siz;i++){
            cost+=abs(filterString[i].first-filterString[i-1].first);
        }
        cout<<cost<<" "<<siz<<endl;
        for(auto u:filterString){
            cout<<u.second<<" ";
        }
        cout<<endl;

    }
};

int main(void){
    int t;
    cin>>t;
    Solution sol=Solution(t);
    return 0;

}