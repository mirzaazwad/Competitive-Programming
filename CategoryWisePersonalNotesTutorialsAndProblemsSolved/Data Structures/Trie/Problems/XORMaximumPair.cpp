/*
Coding Ninjas
Find a pair amongst a given array of numbers that has the maximum XOR
*/
#include<bits/stdc++.h>
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

int findMaxXorPair(TrieNode* head,int* arr,int n){
    int MaxXor=INT_MIN;
    for(int i=0;i<n;i++){
        MaxXor=max(MaxXor,SearchMax(arr[i],head));
    }
    return MaxXor;
}



int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    TrieNode* head=new TrieNode();
    for(int i=0;i<n;i++){
        cin>>arr[i];
        insert(arr[i],head);
    }
    cout<<findMaxXorPair(head,arr,n)<<endl;
    delete[] arr;
    return 0;
}