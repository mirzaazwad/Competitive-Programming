#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

class TrieNode{
    public:
    TrieNode* left;
    TrieNode* right;
};

void insert(int n,TrieNode* head){
    TrieNode* curr=head;
    for(int i=31;i>=0;i--){
        int b=(n>>i)& 1;
        if(b==0){
            if(!curr->left){
                curr->left=new TrieNode();
            }
            curr=curr->left;
        }
        else{
            if(!curr->right){
                curr->right=new TrieNode();
            }
            curr=curr->right;
        }
    }
}

int SearchMax(int value,TrieNode* head){
    TrieNode* curr=head;
    int curr_xor=0;
    for(int i=31;i>=0;i--){
        int b=(value>>i)&1;
        if(b==0){
            if(!curr->right){
                curr=curr->left;
            }
            else {
                curr=curr->right;
                curr_xor+=(1<<i);//path exists so xor is definitely 1
            }
        }
        else{
            if(!curr->left){
                curr=curr->right;
            }
            else{
                curr_xor+=(1<<i);//path exists so xor is definitely 1
                curr=curr->left;
            }
        }
    }
    return curr_xor;
}



int main()
{
    fastio;
    int n;
    cin>>n;
    vector<ll>arr(n);
    TrieNode *trie=new TrieNode();
    map<ll,ll>mp;
    int count=1;
    for(ll &i:arr){
      cin>>i;
      insert(i,trie);
      mp[i]=count++;
    }
    int q;
    cin>>q;
    for(int i=1;i<=q;i++){
      ll a;
      cin>>a;
      ll ans=SearchMax(a,trie);
      ll val=ans^a;
      cout<<"Query "<<i<<": "<<mp[val]<<" "<<ans<<endl;
    }
    return 0;
}