#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;

    cin>>n;
    ll arr[n];
    ll Max=LLONG_MIN;
    /*
    explanation:
    the basic idea is that you are subtracting y from x, but if x is divisible by y then the numbers you would obtain would always be multiples of y
    but if not then at some point you would obtain the number 1, after you obtain the number 1, you can subtract the number 1 from every number in 
    a sequence thus generating a sequence of numbers from 1 to Max.
    How does gcd come into the picture?
    if the gcd of the sequence is something other than 1, it means that you can only generate a sequence of its multiples, think about it, all the numbers
        provided are multiples and that can be the only reason you get a gcd other than 1, when you subtract something from its multiples aiming not to
        get a zero, the sequence obtained will always be the multiples of the gcd.
        Let me exemplify,
        2
        2 5
        let this be the test case:
        so we can get 2 5 (5-2) = 2 5 3 = 2 5 3 (3-2)= 2 5 3 1= so only 4 is missing in the sequence = 2 5 3 5-1 1 = 2 5 3 4 1
        then let's take another test case:
        3
        4 8 12 20
        4 8 12 20 = 4 8 12 20 (20-12) but 8 is already there = 4 8 12 20 (20-8) but 12 is already there = 4 8 12 20 20-4 = 4 8 12 16 20 we get all the multiples
        now try to generate any number other than the ones we already obtained, you would eventually realize that no matter how you subtract 4 no other numbers can be obtained
    except 0 but 0 is excluded in this case as the S is an element of {1..Max} as it is given that POSITIVE INTEGERS are members of the set 
        
    */
    for(ll i=0;i<n;i++){
            cin>>arr[i];
            Max=max(Max,arr[i]);
    }
    sort(arr,arr+n);
    ll t=arr[0];
    for(int i=1;i<n;i++){
        t=__gcd(t,arr[i]);
    }
    ll k=Max/t;
    cout<<k<<endl;



}

int main(void){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}
