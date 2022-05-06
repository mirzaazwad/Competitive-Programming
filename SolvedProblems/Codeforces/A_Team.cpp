#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define Ld long double
#define ull unsigned long long

int main(void) {
    int n;
    int count=0;
    cin>>n;
    for(int i=0;i<n;i++) {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1 && b==1 || b==1 && c==1 || a==1 && c==1){
            count++;
        }
    }
    cout<<count<<endl;
}