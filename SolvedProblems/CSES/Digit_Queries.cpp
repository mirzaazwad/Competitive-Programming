#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
typedef long long ll;
using namespace std;

char computeAns(ll k){
    ll bound=k;
    ll curr_length_window=1;
    //the sequence moves as follow 1..9 -> 1 digit, 9 digits in this window, 10..99 -> 2 digits, 9*10=90 digits in this window
    //100..999 -> 3 digits, 9*100=900 digits in this window and so on
    while(true){
        ll power=9*(ll)pow(10,curr_length_window-1)*(curr_length_window);
        if(bound-power<=0){
            break;
        }
        curr_length_window++;
        bound-=power;
    }
    bound--;
    ll div=bound/curr_length_window;
    ll mod=bound%curr_length_window;
    ll num=(ll)pow(10,curr_length_window-1)+div;//note than 10^0=1 and all the windows starts from 1,10,100, hence we minimize the bound in advance to accomodate the change
    return to_string(num)[mod];
    //now we have to find the number in the window
    //the passed digit shows the amount of digits we have already covered
    //the bound shows the amount of digits we have to cover
    //the curr_length_window shows the length of the window
}

int main()
{
    fastio;
    int q;
    cin>>q;
    while(q--){
        ll k;
        cin>>k;
        cout<<computeAns(k)<<endl;
    }
    return 0;
}