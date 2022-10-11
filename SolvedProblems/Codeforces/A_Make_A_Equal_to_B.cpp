#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

class Program{
    private:
    vector<int>a,b;
    int n;
    public:
    Program(int t){
        for(int i=1;i<=t;i++){
            solve();
        }
    }

    void takeInput(){
        cin>>n;
        for(int i=0;i<n;i++){
            int value;
            cin>>value;
            a.push_back(value);
        }
        for(int i=0;i<n;i++){
            int value;
            cin>>value;
            b.push_back(value);
        }
    }

    void clearSpace(){
        a.clear();
        b.clear();
        n=0;
    }

    void solve(){
        takeInput();
        int aCount=0,bCount=0,same=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                aCount++;
            }
            if(b[i]==1){
                bCount++;
            }
            if(a[i]==b[i] && a[i]==1){
                same++;
            }
        }
        if(same==aCount || same==bCount){
            cout<<abs(aCount-bCount)<<endl;
        }
        else{
            cout<<abs(aCount-bCount)+1<<endl;
        }

        clearSpace();
    }
};

int main()
{
    fastio;
    int t;
    cin>>t;
    Program program=Program(t);
    return 0;
}