#include <bits/stdc++.h>
using namespace std;
#define fast_input ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl "\n"


bool strictlyIncreasing(vector<long long>v,int n){
    for(int i=1;i<n;i++)
    {
        if(v[i]<=v[i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    fast_input;
    int t;
    cin >> t;
    
    while(t--)
    {
       int n;
       cin>>n;
       vector<long long>arr(n);
       for(int i=0; i<n; i++)
       {
           cin>>arr[i];
       }
       if(n>1 && arr.back()==0)//this indicates that the last element is the lowest element which means that it would be impossible sort this by division by 2
       {
           cout<<-1<<endl;
           continue;
       }
       int count=0;
       bool stop=false;
       for(int i=n-2;i>=0;i--)// goind reverse is more efficient for this problem going from the front would require more nested looping
       {
           while(arr[i+1]<=arr[i])
           {
               arr[i]=arr[i]>>1;
               count++;
           }
           if(arr[i]==0 && i>0)
           {
               stop=true;
               break;
           }
       }
       if(stop)
       {
           cout<<-1<<endl;
       }
       else
       {
           cout<<count<<endl;
       }
       
       
    }
    return 0;
}