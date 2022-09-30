#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int num_codes(int *n, int size){
    if(size==0 || size==1)return 1;
    int output=num_codes(n,size-1);
    if(n[size-2]*10+n[size-1]<=26){
        output+=num_codes(n,size-2);
    }
    return output;
}

int num_codes_dp(int *n,int size,int *arr){
    if(size==0 || size==1)return 1;
    if(arr[size]>0){
        return arr[size];
    }
    int output=num_codes_dp(n,size-1,arr);
    if(n[size-2]*10+n[size-1]<=26){
        output+=num_codes_dp(n,size-2,arr);
    }
    arr[size]=output;
    return output;
}

int num_codes_iterative(int * input,int size){
    int *output=new int[size+1];
    output[0]=1;
    output[1]=1;
    for(int i=2;i<=size;i++){
        output[i]=output[i-1];
        if(input[i-2]*10+input[i-1]<=26){
            output[i]+=output[i-2];
        }
    }
    int ans=output[size];
    return ans;
}

int main()
{
    fastio;
    int array[4]={4,2,1,3};
    int output[5]={0};
    cout<<num_codes_dp(array,4,output)<<endl;
    cout<<num_codes(array,4)<<endl;
    cout<<num_codes_iterative(array,4)<<endl;
    return 0;
}