#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

class Solution{
    private:
    int n;
    public:
    Solution(int t)
    {
        for(int i=1;i<=t;i++){
            
            int n;
            cin>>n;
            mil_ja_sim_sim(n);
        }
    }



    void mil_ja_sim_sim(int n){

        for(int i=1;i<=n;i++){
            if(i==1){
                cout<<1<<endl;
            }
            else{
                cout<<1<<" ";
                for(int j=2;j<=i-1;j++){
                    cout<<0 <<" ";
                }
                cout<<1<<endl;
            }
        }

        
    }
};


int main(void){
    int t;
    cin>>t;
    Solution solve=Solution(t);
}