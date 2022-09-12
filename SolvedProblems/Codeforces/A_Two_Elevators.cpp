#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

//In the name of Allah, the Lord of Mercy, the Giver of Mercy

class Solution{
    private:

    public:

    Solution(int t){
        for(int i=1;i<=t;i++){
            JustWork();
        }
    }

    void JustWork(){
        ll a,b,c;
        cin>>a>>b>>c;
        ll path;
        if(b>c){
            path=b-1;
        }
        else{
            path=(c-b)+(c-1);
        }
        if(abs(a-1)<path){
            cout<<1<<endl;
        }   
        else if(abs(a-1)>path){
            cout<<2<<endl;
        }
        else cout<<3<<endl;
        


    }
};

int main(void){
    int t;
    cin>>t;
    Solution sol=Solution(t);
    return 0;

}