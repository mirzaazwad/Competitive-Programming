#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

//In the name of Allah, the Lord of Mercy, the Giver of Mercy

class Solution{
    private:
    int n;
    public:

    Solution(int t){
        for(int i=1;i<=t;i++){
            JustWork();
        }
    }

    void JustWork(){
        cin>>n;
        string s;
        cin>>s;
        s.push_back('\0');
        bool flag[n]={false};
        for(int i=0;i<n;i++){
            if(s[i]=='0' && s[i+1]!='0'){
                flag[i]=true;
                flag[i-1]=true;
                flag[i-2]=true;
            }
        }
        if(s[n-1]==0){
            flag[n-1]=true;
            flag[n-2]=true;
            flag[n-3]=true;
        }
        string tmp;
        int i=0;
        while(i<n){
            if(flag[i]){
                int shift=(s[i]-'0')*10+(s[i+1]-'0');
                tmp.push_back('a'+shift-1);
                i+=3;
            }
            else{
                int shift=s[i]-'0';
                tmp.push_back('a'+shift-1);
                i++;
            }
        }
        cout<<tmp<<endl;
    }
};

int main(void){
    int t;
    cin>>t;
    Solution sol=Solution(t);
    return 0;

}