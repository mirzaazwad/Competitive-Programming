#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base:: sync_with_stdio(false);cin.tie(NULL);

int main(void) {
    fastio
    int matrix[5][5];
    int row,column;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]){
                row=i;
                column=j;
            }
        }
    }
    cout<<abs(row-2)+abs(column-2)<<endl;

}