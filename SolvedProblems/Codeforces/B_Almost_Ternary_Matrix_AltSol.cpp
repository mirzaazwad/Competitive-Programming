#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int arr[52][52];

void solve(void){
   int n,m; cin >> n >> m;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
} 

int main()
{
    fastio;
    arr[0][0] = 1;
    for(int i=0;i<52;i++){
        for(int j=0;j<52;j++){
            if(!j){
                if(i-2>=0){
                    if(arr[i-1][j]==arr[i-2][j]){
                        arr[i][j]=arr[i-1][j]^1;
                    }
                    else{
                        arr[i][j]=arr[i-1][j];
                    }
                }
                else{
                    arr[i][j]=arr[i-1][j]^1;
                }
            }
            else{
                if(j-2>=0){
                    if(arr[i][j-1]==arr[i][j-2]){
                        arr[i][j]=arr[i][j-1]^1;
                    }
                    else{
                        arr[i][j]=arr[i][j-1];
                    }
                }
                else{
                    arr[i][j]=arr[i][j-1]^1;
                }
            }
        }
    }
    int t;
    cin >> t;
    
    while(t--)
    {
       solve();
    }
    return 0;
}