#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       int n;cin>>n;
       long long num_of_passes[n];
       long long sum=0;
       long long Max=LLONG_MIN;//Initialising min value to find maximum
       for(int i=0;i<n;i++){
           cin>>num_of_passes[i];
           sum+=num_of_passes[i];
           Max=max(num_of_passes[i],Max);
       }
       if(sum==0){
           cout<<0<<endl;
           continue;
       }
       //It can be proven that for 2*Max<=sum, there is only one ball
       if(2*Max<=sum)cout<<1<<endl;
       //For the remaining cases there are 2*Max-sum balls
       else cout<<abs(sum-2*Max)<<endl;
       //observe the data here for better understanding

    }
    return 0;
}