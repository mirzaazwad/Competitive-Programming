#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int log_a_to_base_b(int a, int b)
{
    return log2(a) / log2(b);
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       long long x,y;
       cin >> x >> y;
       int num=x;
       bool found=false;
       if(x==y){
           cout<<1<<" "<<1<<endl;
           continue;
       }
       else if(y<x || y%x!=0){
           cout<<0<<" "<<0<<endl;
           continue;
       }
       else{
           int num=y/x;
           int i,count;
           for(i=2;i<=num;i++)
           {
               int value=i;
               count=1;
               if(num%i==0){
                   count=log_a_to_base_b(num,i);
                   if((int)pow(value,count)==num){
                       found=true;
                       break;
                   }
                   
               }
           }
           if(found){
               cout<<count<<" "<<i<<endl;
           }
           else{
               cout<<0<<" "<<0<<endl;
           }
       }
       
    }
    return 0;
}