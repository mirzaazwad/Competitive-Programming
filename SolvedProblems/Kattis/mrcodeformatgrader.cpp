#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n,m;
    cin>>n>>m;
    int arr[m];
    bool error[n+1]={false};
    for(int i=0;i<m;i++){
        cin>>arr[i];
        error[arr[i]]=true;
    }
    int i=1;
    vector<pair<int,int>>v;
    while(i<m){
        if(i+1>=m){
            break;
        }
        if(abs(arr[i-1]-arr[i])<abs(arr[i+1]-arr[i])){
            pair<int,int>p;
            p.first=arr[i-1];
            p.second=arr[i];
            v.push_back(p);
            i+=2;
        }
        else if(abs(arr[i-1]-arr[i])==abs(arr[i+1]-arr[i])){
            pair<int,int>p;
            p.first=arr[i-1];
            p.second=arr[i];
            v.push_back(p);
            i++;
        }
        else{
            pair<int,int>p;
            p.first=-1;
            p.second=arr[i-1];
            i++;
        }
    }
    if(m>2)
    {
        if(abs(arr[m-1]-arr[m-2])<=abs(arr[m-2]-arr[m-3]) && arr[m-1]!=n){
            pair<int,int>p;
            p.first=arr[m-2];
            p.second=arr[m-1];
            v.push_back(p);
        }
    }
    cout<<"Errors: ";
    int start=1;
    bool endFound=false;
     i=1;
    vector<pair<int,int>>w;
    while(i<=n){
        if(!error[i]){
            i++;
            continue;
        }
        int j;
        for(j=i+1;j<=n;j++){
            if(!error[j])break;
        }
        if(j-i>1){
            w.push_back({i,j-1});
            i+=(j-i);
        }
        else{
            w.push_back({-1,i});
        }
        i++;
    }
    int len=w.size();
    for(int i=0;i<len;i++){
        if(w[i].first==-1){
            if(i<len-2) cout<<w[i].second<<", ";
            else if(i<len-1)cout<<w[i].second<<" and ";
            else{
                cout<<w[i].second<<endl;
            }
            continue;
        }
        if(i<len-2) cout<<w[i].first<<'-'<<w[i].second<<", ";
        else if(i<len-1)cout<<w[i].first<<'-'<<w[i].second<<" and ";
        else{
            cout<<w[i].first<<'-'<<w[i].second<<endl;
        }
    }
    cout<<"Correct: ";
    w.clear();
     i=1;
    while(i<=n){
        if(error[i]){
            i++;
            continue;
        }
        int j;
        for(j=i+1;j<=n;j++){
            if(error[j])break;
        }
        if(j-i>1){
            w.push_back({i,j-1});
            i+=(j-i);
        }
        else{
            w.push_back({-1,i});
        }
        i++;
    }
     len=w.size();
    for(int i=0;i<len;i++){
        if(w[i].first==-1){
            if(i<len-2) cout<<w[i].second<<", ";
            else if(i<len-1)cout<<w[i].second<<" and ";
            else{
                cout<<w[i].second<<endl;
            }
            continue;
        }
        if(i<len-2) cout<<w[i].first<<'-'<<w[i].second<<", ";
        else if(i<len-1)cout<<w[i].first<<'-'<<w[i].second<<" and ";
        else{
            cout<<w[i].first<<'-'<<w[i].second<<endl;
        }
    }



    return 0;
}