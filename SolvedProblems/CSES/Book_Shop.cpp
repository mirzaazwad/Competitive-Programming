#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
using namespace std;
vector <int >price, pages;

int pageCount(int n,int Sum){
    vector<vector<int>>dp(n+1,vector<int>(Sum+1,0));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=Sum;j++){
            //option1 = book number i-1 is not included, hence no pages added.
            //option2 = book number i-1 is included, hence pages are added.
            //option1 = dp[i-1][j] ...book not included so total price(j) remains same.
            //option2 = dp[i-1][j-price[i-1]] + page[i-1]....total price(j) decreased and pages are counted for book i-1.
            dp[i][j]=dp[i-1][j];
            if(j>=price[i-1]){
                dp[i][j] = max (dp[i][j],dp[i-1][j-price[i-1]] + pages[i-1]); //max of both the boxes included in dp[i][j]. 
            }
        }
    }
    return dp[n][Sum];
}

int main()
{
    fastio;
    int n,x;
    cin>>n>>x;
    price.resize(n);
    pages.resize(n);
    for(int &i:price)cin>>i;
    for(int &i:pages)cin>>i;
    cout<<pageCount(n,x)<<endl;

    return 0;
}