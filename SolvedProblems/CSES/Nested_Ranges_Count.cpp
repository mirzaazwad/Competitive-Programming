#include <bits/stdc++.h>
using namespace std;
//In The Name Of Allah
//The Lord Of Mercy, The Giver Of Mercy
//Which of Allah's blessings can you deny?
typedef long long ll;
#define endl "\n"
#define all(ranges) ranges.begin(),ranges.end()

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int>>, rb_tree_tag,tree_order_statistics_node_update>

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
    ordered_set rightBoundaries;
    int n;
    cin>>n;
    vector<range> ranges;
    vector<int>contained(n,0);
    vector<int>contains(n,0);
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        ranges.emplace_back(l,r,i);
    }
    sort(all(ranges));
    for(int i=0;i<n;i++){
        rightBoundaries.insert({ranges[i].getR(),-i});
        contained[ranges[i].getIndex()]=rightBoundaries.size()-rightBoundaries.order_of_key({ranges[i].getR(),-i})-1;
    }
    rightBoundaries.clear();
    for(int i=n-1;i>=0;i--){
        rightBoundaries.insert({ranges[i].getR(),-i});
        contains[ranges[i].getIndex()]=rightBoundaries.order_of_key({ranges[i].getR(),-i});
    }
    for(int i=0;i<n;i++)
        cout<<contains[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<contained[i]<<" ";
    cout<<endl;
    
    
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}