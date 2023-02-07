#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void pleasebeac(){
  int n;
  cin>>n;
  int tries=(-1+sqrt(double(1+8*n)))/2.00f;
  int player1=0;
  int player2=0;
  bool found=false;
  int j=1;
  for(int i=1;i<=tries;i++){
    if(!found){
      player1+=i;
    }
    else{
      player2+=i;
    }
    if(i%j==0){
      if(j%2==0){
        found=found^1;
      }
      found=found^1;
      j++;
    }
  }
  if(!found){
    player1+=(n-(tries*(tries+1))/2);
  }
  else{
    player2+=(n-(tries*(tries+1))/2);
  }
  cout<<player1<<" "<<player2<<endl;
}

int main()
{
    fastio;
    int tc;
    cin>>tc;
    while(tc--){
      pleasebeac();
    }
    return 0;
}