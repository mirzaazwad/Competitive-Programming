#include <bits/stdc++.h>
using namespace std;
//In The Name Of Allah
//The Lord Of Mercy, The Giver Of Mercy
//Which of Allah's blessings can you deny?
typedef long long ll;
#define endl "\n"
#define all(v) v.begin(),v.end()

class range{
    private:
    int l,r,index;
    public:
    range(int l,int r,int index){
        this->l=l;
        this->r=r;
        this->index=index;
    }
    bool operator<(const range &other)const{
        if(l==other.l)
            return r>other.r;
        return l<other.l;
    }
    int getL(){
        return l;
    }
    int getR(){
        return r;
    }
    int getIndex(){
        return index;
    }
};

void solve() {
    int n;
    cin>>n;
    vector<range> v;
    vector<bool>contained(n,false);
    vector<bool>contains(n,false);
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        v.push_back(range(l,r,i));
    }
    sort(all(v));
    int maxEnd=0;
    for(int i=0;i<n;i++){
        if(v[i].getR()<=maxEnd){
            contained[v[i].getIndex()]=true;
        }
        maxEnd=max(maxEnd,v[i].getR());
    }
    int minEnd=INT_MAX;
    for(int i=n-1;i>=0;i--){
        if(v[i].getR()>=minEnd){
            contains[v[i].getIndex()]=true;
        }
        minEnd=min(minEnd,v[i].getR());
    }
    for(int i=0;i<n;i++){
        cout<<contains[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<contained[i]<<" ";
    }
    cout<<endl;
    
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}