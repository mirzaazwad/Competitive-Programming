#include<bits/stdc++.h>
using namespace std;

void solve(){
    //solution function
    int n;
    cin>>n;
    int location[n];
    int last_water_position=-1,first_water_position=-1;
    for(int i=0;i<n;i++)cin>>location[i];//filling the input for the land and water
    //finding the first water position
    for(int i=0;i<n;i++){//finding the first water position
        if(location[i]==0){
            first_water_position=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(location[i]==0){
            last_water_position=i;
        }
    }
    if(first_water_position==-1){
        cout<<0<<endl;
        return;
    }
    cout<<last_water_position-first_water_position+2<<endl;

}

int main(void){
    int tc;//test case
    cin>>tc;
    while(tc--){
        solve();//solution for individual test cases
    }
}