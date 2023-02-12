#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

void solve(){
  pair<double,double>p[4];
  vector<pair<double,double>>st;
  for(int i=0;i<4;i++){
    cin>>p[i].first;
    cin>>p[i].second;
  }
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      if(i!=j){
        double slope=double(p[i].first-p[j].first)/double(p[i].second-p[j].second);
        st.emplace_back(slope,p[i].second-slope*p[i].first);
      }
    }
  }
  double centre1,centre2;
  cin>>centre1>>centre2;
  double a1,a2;
  cin>>a1>>a2;
  double x1,x2,x3,x4,y1,y2,y3,y4;
  x1=x2=x3=x4=centre1;
  y1=y2=y3=y4=centre2;
  while(true){
    bool found=false;
    for(auto u:st){
      if(y1-u.first*x1-u.second>0){
        found=true;
        break;
      }
      if(y2-u.first*x2-u.second>0){
        found=true;
        break;
      }
      if(y3-u.first*x3-u.second>0){
        found=true;
        break;
      }
      if(y4-u.first*x4-u.second>0){
        found=true;
        break;
      }
    }
    x1+=a1;
    x2-=a1;
    x3+=a1;
    x4-=a1;
    y1+=a2;
    y2+=a2;
    y3-=a2;
    y4-=a2;
    if(found)break;
  }
  // cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<endl;
  // cout<<y1<<" "<<y2<<" "<<y3<<" "<<y4<<endl;
  cout<<(ll)floor(abs((x1-x2)*2)*abs((y1-y3)*2))<<endl;
}

int main()
{
    fastio;
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++){
      cout<<"Case "<<i<<": ";
      solve();
    }
    return 0;
}