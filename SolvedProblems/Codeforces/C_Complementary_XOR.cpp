//In the name of Allah, The Lord of Mercy, The Giver of Mercy
//Author: Mirza Mohammad Azwad
//Institution: Islamic University of Technology
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#define ll int64_t
#define short int16_t
#define int int32_t
#define endl "\n"
 
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
 

namespace Problem{
    class Program{
        private:
            int n;
            string a,b;
        public:
            Program(int t=1){
                for(int i=1;i<=t;i++){
                    takeInput();
                    solve();
                    clearSpace();
                }
            }
 
            void takeInput(){
                cin>>n;
                cin>>a;
                cin>>b;
            }
 
            void clearSpace(){
                n=0;
                a.clear();
                b.clear();
            }

            bool same_check(string a,string b){
                if(a==b)return true;
                else return false;
            }

            bool opposite_check(string a, string b,int n){
                for(int i=0;i<n;i++){
                    if(a[i]==b[i]){
                        return false;
                    }
                }
                return true;
            }

            void solve(){
                bool oppositeCheck=opposite_check(a,b,n);
                bool sameCheck=same_check(a,b);
                ll one_count=count(a.begin(),a.end(),'1');
                vector<pair<int,int>>ans;
                if((one_count%2==1 && sameCheck) || (one_count%2==0 && oppositeCheck)){
                    cout<<"YES"<<endl;
                    for(int i=1;i<=n;i++){
                        if(a[i-1]=='1'){
                            ans.emplace_back(i,i);
                        }
                    }
                    ans.emplace_back(1,1);
                    ans.emplace_back(2,2);
                    ans.emplace_back(1,2);
                }   
                else if(!oppositeCheck && !sameCheck){
                    cout<<"NO"<<endl;
                    return;
                }
                else{
                    cout<<"YES"<<endl;
                    for(int i=1;i<=n;i++){
                        if(a[i-1]=='1'){
                            ans.emplace_back(i,i);
                        }
                    }
                }
                cout<<ans.size()<<endl;
                for(auto u:ans){
                    cout<<u.first<<" "<<u.second<<endl;
                }
            }
    };
}
signed main()
{
    fastio;
    int tc;
    cin >> tc;
    Problem::Program program=Problem::Program(tc);
    return 0;
}