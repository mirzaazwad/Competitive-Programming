#include<bits/stdc++.h>
using namespace std;

int charCount(string s,int n, char c){
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]==c){
            count++;
        }
    }
    return count;
}

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s,t;
        cin >> s >> t;
        if(charCount(s,n,'b')!=charCount(t,n,'b')){
            cout<<"NO"<<endl;
            continue;
        }
        int j=0;
        bool error=false;
        for(int i=0;i<n;i++){
            if(s[i]=='b')continue;
            while(t[j]=='b')j++;
            if(s[i]!=t[j] || (s[i]=='a' && i>j) || s[i]=='c' && i<j){
                cout<<"NO"<<endl;
                error=true;
                break;
            }
            j++;
        }
        if(!error){
            cout<<"YES"<<endl;
        }
    }
}