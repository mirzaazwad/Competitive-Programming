#include <bits/stdc++.h>
using namespace std;
// In The Name Of Allah
// The Lord Of Mercy, The Giver Of Mercy
// Which of Allah's blessings can you deny?
typedef long long ll;
#define endl "\n"
#define all(v) v.begin(), v.end()

void solve()
{
    string s;
    cin >> s;

    int curr_sorted=1;
    int curr=0;
    stack<int> st;
    st.push(s.size()+1);
    for(char chr:s){
        if(chr=='+')curr++;
        else if(chr=='-'){
            if(curr==0){
                cout<<"NO"<<endl;
                return;
            }
            curr--;
            curr_sorted=min(curr_sorted,curr);
            curr_sorted=max(curr_sorted,1);
            while(st.size()>1 && st.top()>curr){
                st.pop();
            }
        }
        else if(chr=='0'){
            if(curr<=curr_sorted){
                cout<<"NO"<<endl;
                return;
            }
            st.push(curr);
        }
        else if(chr=='1'){
            if(curr>=st.top()){
                cout<<"NO"<<endl;
                return;
            }
            curr_sorted=max(curr_sorted,curr);
        }
    }
    cout<<"YES"<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}