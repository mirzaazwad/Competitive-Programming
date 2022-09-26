#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

class Program{
    private:
    double AB,AC,BC,ratio;
    double computeAD(double AB,double ratio,double BC){
        ratio=computeNEWRatio(ratio);
        return AB/(sqrt(ratio));
    }

    double computeNEWRatio(double ratio){
        return (ratio+1)/ratio;
    }

    public:
    Program(int t){
        for(int i=1;i<=t;i++){
            cout<<"Case "<<i<<": ";
            solve();
            cout<<endl;
        }
    }



    void solve(){
        cin>>AB>>AC>>BC>>ratio;
        cout<<fixed<<setprecision(10)<<computeAD(AB,ratio,BC);

    }

    
};

int main(void){
    int t;
    cin>>t;
    Program solution=Program(t);
}