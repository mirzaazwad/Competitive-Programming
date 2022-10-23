/*
Coin Change Problem
For the given infinite supply of coins of each of denominations, D = {D0, D1, D2, D3, ...... Dn-1}. You need to figure out the total number of ways W, in which you can make the change for Value V using coins of denominations D.
Return 0 if the change isn't possible.
Input Format
The first line of the input contains an integer value N, which denotes the total number of denominations.

The second line of input contains N values, separated by a single space. These values denote the value of denomination.

The third line of the input contains an integer value, that denotes the value of V.
Output Format
Print the total total number of ways i.e. W.
Constraints :
1 <= n <= 10
1 <= V <= 1000

Time Limit: 1sec
Sample Input 1 :
3
1 2 3
4
Sample Output 1 :
4
Explanation to Sample Input 1 :
Number of ways are - 4 total i.e. (1,1,1,1), (1,1, 2), (1, 3) and (2, 2).
Sample Input 2 :
6
1 2 3 4 5 6
250
Sample Output 2 :
13868903
*/
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long

using namespace std;

int dp[1001][11];

int CoinChange(int value,int *coins,int len){
    if(value==0){
        return 1;
    }
    if(value<0){
        return 0;
    }
    if(len==0){
        return 0;
    }
    if(dp[value][len]!=-1){
        return dp[value][len];
    }
    int first=CoinChange(value-coins[0],coins,len);
    int second=CoinChange(value,coins+1,len-1);
    dp[value][len]=first+second;
    return dp[value][len];
}

int main()
{
    fastio;
    int amount,numberOfCoinTypes;

    cin>>numberOfCoinTypes;

    int coinDenominations[numberOfCoinTypes];

    for(int i=0;i<numberOfCoinTypes;i++)cin>>coinDenominations[i];

    cin>>amount;

    memset(dp,-1,sizeof(dp));

    cout<<CoinChange(amount,coinDenominations,numberOfCoinTypes);

    return 0;
}