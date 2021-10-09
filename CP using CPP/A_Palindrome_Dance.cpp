#include <bits/stdc++.h> 
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a,b,cost=0;
int arr[21];

bool isPalindrome(int front,int back){
    if(!(front<=back)){
        return true;
    }
    if(arr[front]!=arr[back]){
        if(arr[front]==2 && arr[back]!=2){
            arr[front]=arr[back];
            if(arr[front]==0)cost+=a;
            else cost+=b;
        }
        else if(arr[front]!=2 && arr[back]==2){
            arr[back]=arr[front];
            if(arr[back]==0)cost+=a;
            else cost+=b;
        }
        else return false;
    }
    if(arr[front]==arr[back] && arr[front]==2){
        if(front!=back)cost+=(2*min(a,b));
        else cost+=min(a,b);
    }
    return isPalindrome(++front,--back);
}

int main(){
    fastio;
    int n;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(isPalindrome(0,n-1))cout<<cost<<endl;
    else cout<<-1<<endl;
    return 0;   
}