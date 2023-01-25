#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int>visited(100,false);
vector<int>adj[100];
vector<int>level(100,0);

void bfs(int node){
  visited[node]=true;
  queue<int>q;
  q.push(node);
  level[node]=0;
  while(!q.empty()){
    int temp=q.front();
    q.pop();
    for(auto u:adj[temp]){
      if(!visited[u]){
        visited[u]=true;
        level[u]=level[temp]+1;
        q.push(u);
      }
    }
  }
}

bool isValid(int a,int b){
  if(a+b<64 && a+b>=0 && ((abs(a/8 - (a+b)/8)==1 && abs(a%8-(a+b)%8)==2)||(abs(a/8 - (a+b)/8)==2 && abs(a%8-(a+b)%8)==1))){
    return true;
  }
  return false;
}

void addEdge(int i,int j){
  int offset[]={1*8+2,1*8-2,-1*8+2,-1*8-2,2*8+1,2*8-1,-2*8+1,-2*8-1};
  for(auto u:offset){
    if(isValid(i*8+j,u)){
      adj[i*8+j].push_back(i*8+j+u);
      adj[i*8+j+u].push_back(i*8+j);
    }
  }
}

void build_graph(){
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      addEdge(i,j);
    }
  }
}

int main(void){
    build_graph();
    string st,fi;
    while(cin>>st>>fi){
      int start=(st[0]-'a')*8 + st[1]-'1';
      int finish=(fi[0]-'a')*8 + fi[1]-'1';
      bfs(start);
      cout<<"To get from "+st+" to "<<fi<<" takes "<<level[finish]<<" knight moves."<<endl;
      for(int i=0;i<100;i++)visited[i]=false;
    }
}