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
       int n;
       cin>>n;
       int a[n],b[n];
       for(int i=0;i<n;i++)cin>>a[i];
       for(int i=0;i<n;i++)cin>>b[i];
       int max_ixa=max_element(a,a+n)-a;
       int max_ixb=max_element(b,b+n)-b;
       if(a[max_ixa]>b[max_ixb]){
           for(int i=0;i<n;i++){
               if(b[i]>a[i]){
                   swap(b[i],a[i]);
               }
           }
           max_ixa=max_element(a,a+n)-a;
            max_ixb=max_element(b,b+n)-b;
       }
       else{
           for(int i=0;i<n;i++){
               if(a[i]>b[i]){
                   swap(b[i],a[i]);
               }
           }
           max_ixa=max_element(a,a+n)-a;
            max_ixb=max_element(b,b+n)-b;
       }
       cout<<a[max_ixa]*b[max_ixb]<<endl;

    }
    return 0;
}
