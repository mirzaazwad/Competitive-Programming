#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main(void) {
    int a,b;
    cin>>a>>b;
    int count=0;
    while(a<=b) {
        a=a*3;
        b=b*2;
        count++;
    }
    cout<<count<<endl;
}