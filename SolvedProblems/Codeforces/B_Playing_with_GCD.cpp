#include<bits/stdc++.h>
using namespace std;
#define ll long long

namespace ProblemB{
    class Program{
        private:
        int n;
        vector<ll>a;
        vector<ll>b;
        public:

        Program(int t){
            for(int i=1;i<=t;i++){
                takeInput();
                solve();
                clearSpace();
            }
        }

        void giveOutput(bool output){
            if(output){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

        void takeInput(){
            cin>>n;
            for(int i=0;i<n;i++){
                ll value;
                cin>>value;
                a.push_back(value);
            }
        }

        void clearSpace(){
            n=0;
            a.clear();
            b.clear();
        }

        void solve(){
            for(int i=1;i<n-1;i++){
                if(a[i]%__gcd(a[i-1],a[i+1])!=0){
                    giveOutput(false);
                    return;
                }
            }
            giveOutput(true);
        }
    };
}

int main(void){
    int tc;
    cin>>tc;
    ProblemB::Program program=ProblemB::Program(tc);
}