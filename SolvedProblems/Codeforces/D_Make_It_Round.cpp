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
            ll n,m,k,n_init;
        public:
            Program(int t=1){
                for(int i=1;i<=t;i++){
                    takeInput();
                    solve();
                    clearSpace();
                }
            }
 
            void takeInput(){
                cin>>n>>m;
                k=1;
                n_init=n;
            }

            int count2(){
                int cnt2=0;
                while(n>0 && n%2==0){
                    cnt2++;
                    n/=2;
                }
                return cnt2;
            }

            int count5(){
                int cnt5=0;
                while(n>0 && n%5==0){
                    cnt5++;
                    n/=5;
                }
                return cnt5;
            }
 
            void clearSpace(){
                n=0,m=0;
            }

            void solve(){
                int cnt2=count2();
                int cnt5=count5();
                while(cnt2<cnt5 && (k<<1)<=m){
                    k=k<<1;
                    cnt2++;
                }
                while(cnt5<cnt2 && (k*5)<=m){
                    k=k*5;
                    cnt5++;
                }
                //we are looking to make cnt2==cnt5 so that it is divisble by 10
                while(k*10<=m){
                    k=k*10;
                }
                //then we are looking for upto how many numbers can it be multiplied by 10

                k=k*(m/k);//the factor d for which it is off, the answer is n.k=2^(cnt2)*5^(cnt5)*d
                if(k==1){
                    cout<<n_init*m<<endl;
                }
                else{
                    cout<<n_init*k<<endl;
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