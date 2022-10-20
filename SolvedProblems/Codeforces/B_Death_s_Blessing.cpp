//In the name of Allah, The Lord of Mercy, The Giver of Mercy
//Author: Mirza Mohammad Azwad
//Institution: Islamic University of Technology
#include <bits/stdc++.h> 
#define ll long long
#define endl "\n"
 
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


namespace Problem{
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
 
            void takeInput(){
                cin>>n;
                for(int i=0;i<n;i++){
                    ll value;
                    cin>>value;
                    a.push_back(value);
                }
                for(int i=0;i<n;i++){
                    ll value;
                    cin>>value;
                    b.push_back(value);
                }
                sort(b.begin(),b.end());
                b.pop_back();
            }


 
            void clearSpace(){
                a.clear();
                b.clear();
            }
            void solve(){
                cout<<accumulate(a.begin(),a.end(),accumulate(b.begin(),b.end(),0LL))<<endl;
            }
    };
}
int main(void)
{
    fastio;
    int tc;
    cin >> tc;
    Problem::Program program=Problem::Program(tc);
    return 0;
}