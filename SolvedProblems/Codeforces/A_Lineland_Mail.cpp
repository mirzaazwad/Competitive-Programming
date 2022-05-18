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
    cin >> n;
    int xCoordinateOfCity[n+1];
    int minx[n+1];
    int maxx[n+1];
    int maximum=INT_MIN,minimum=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        cin >> xCoordinateOfCity[i];
        maximum=max(maximum,xCoordinateOfCity[i]);
        minimum=min(minimum,xCoordinateOfCity[i]);
    }
    for(int i=1;i<=n;i++){
        if(i>1 && i<n){
            minx[i]=min(abs(xCoordinateOfCity[i]-xCoordinateOfCity[i-1]),abs(xCoordinateOfCity[i+1]-xCoordinateOfCity[i]));
        }
        else if(i==1){
            minx[i]=abs(xCoordinateOfCity[i+1]-xCoordinateOfCity[i]);
        }
        else if(i==n){
            minx[i]=abs(xCoordinateOfCity[i]-xCoordinateOfCity[i-1]);
        }
        maxx[i]=max(abs(xCoordinateOfCity[i]-minimum),abs(xCoordinateOfCity[i]-maximum));
    }

     for(int i=1;i<=n;i++){
        cout<<(minx[i])<<" ";
        cout<<(maxx[i])<<endl;
    }
    return 0;
}