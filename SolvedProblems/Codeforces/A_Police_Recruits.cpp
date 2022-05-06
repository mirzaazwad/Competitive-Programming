#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(void)
{
    fastio
    int n;
    cin>>n;
    int crimesAndRecruits[n];//if value is positive recruit else crime occurence
    int recruits=0;
    int untreatedCrimes=0;
    for(int i=0;i<n;i++)
    {
        cin>>crimesAndRecruits[i];
        if(crimesAndRecruits[i]>0)
        {
            recruits+=crimesAndRecruits[i];
        }
        else{
            if(recruits>0){
                recruits--;
            }
            else{
                untreatedCrimes++;
            }
        }
    }
    cout<<untreatedCrimes<<endl;
}