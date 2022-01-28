#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;


int main()
{
    fastio;
    int t;
    cin >> t;
    vector<vector<char>>arr(40,vector<char>(40,'.'));
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       if(n==1 && k==1){
            cout<<"R"<<"\n";continue;
       }
       else if(k>(int)ceil((double)n/(double)2)){
           cout<<-1<<endl;
           continue;
       }
       else{
            int cnt=0;
           for(int i=0;i<n;i++){
               for(int j=0;j<n;j+=2){
                   if(i==j){
                       arr[i][j]='R';
                        cnt++;
                        if(cnt==k)break;
                   }
               }
               if(cnt==k)break;
           }
       }
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               cout<<arr[i][j];
           }
           cout<<"\n";
       }
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               arr[i][j]='.';
           }
       }

    }

    return 0;
}
