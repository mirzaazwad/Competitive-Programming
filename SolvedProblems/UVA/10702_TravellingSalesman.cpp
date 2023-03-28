#include<bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
int cities , source,numOfEndings,ending[105];
int edges[105][105];
int dp[105][1005];

int solve(int currNode , int remainingVisited)
{
    int &ret = dp[currNode][remainingVisited];
    if( ret != -1 )return ret;

    ret = INT_MIN;

    if(remainingVisited == 1){

            for( int i = 1 ; i <= cities ; i++ ){
                    if( ending[i] ) ret =  max( ret , edges[currNode][i] );
            }
    }
    else{

            for( int i = 1 ; i <= cities ; i++ ){

                    ret = max( ret , edges[currNode][i] +solve(i,remainingVisited - 1 ) ) ;
            }
    }
    return ret ;

}

int main()
{
    fastio;
    int i , j , haveTovisit ;
    while(cin>>cities>>source>>numOfEndings>>haveTovisit)
    {
        if( cities == 0 && source == 0 && numOfEndings == 0 && haveTovisit == 0 )break;

        memset(ending,false,sizeof ending);

        for( i = 1 ; i <= cities ; i++ )
            for( j = 1 ; j <= cities ; j++)
                    cin>>edges[i][j];

        for( i = 0 ; i < numOfEndings ; i++){
            cin>>j;
            ending[j] = true ;
        }

        memset(dp,-1,sizeof dp);

        int ret = solve(source,haveTovisit);

        cout<<ret<<endl;
    }
    return 0;
}