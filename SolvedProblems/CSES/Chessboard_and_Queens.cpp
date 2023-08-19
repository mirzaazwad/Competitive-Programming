#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
vector<vector<char>>board(8,vector<char>(8));
vector<bool>row(8,false),diagonalLeft(8,false),diagonalRight(8,false);
int res=0;

void number_of_possibilities(int queens){
    if(queens<0){
        res++;
        return;
    }
    for(int i=7;i>=0;i--){
        if(board[queens][i]=='.' && !row[i]){
            if(!diagonalLeft[i-queens+7] && !diagonalRight[i+queens]){
                row[i]=diagonalLeft[i-queens+7]=diagonalRight[i+queens]=true;
                number_of_possibilities(queens-1);
                row[i]=diagonalLeft[i-queens+7]=diagonalRight[i+queens]=false;
            }
        }
    }
}

int main()
{
    fastio;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>board[i][j];
        }
    }
    number_of_possibilities(7);
    cout<<res<<endl;
    return 0;
}