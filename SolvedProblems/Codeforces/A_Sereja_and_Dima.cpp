#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    deque<int>numbers(n);
    for(int i=0;i<n;i++)cin>>numbers[i];
    int sreeja=0,dima=0;
    for(int i=0;i<n;i++){
        if((i&1)){
            dima+=max(numbers.front(),numbers.back());
            if(numbers.front()>numbers.back()){
                numbers.pop_front();
            }
            else{
                numbers.pop_back();
            }
        }
        else{
            sreeja+=max(numbers.front(),numbers.back());
            if(numbers.front()>numbers.back()){
                numbers.pop_front();
            }
            else{
                numbers.pop_back();
            }
        }
    }
    cout<<sreeja<<" "<<dima<<endl;
    return 0;
}