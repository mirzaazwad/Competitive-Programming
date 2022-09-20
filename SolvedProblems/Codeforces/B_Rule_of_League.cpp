//IN THE NAME OF ALLAH, THE LORD OF MERCY, THE GIVER OF MERCY
//Mirza Mohammad Azwad-ISLAMIC UNIVERSITY OF TECHNOLOGY
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void mil_ja_sim_sim(){
    int n,x,y;
    cin>>n>>x>>y;
    if(min(x,y)==0 && max(x,y)>0 && (n-1)%max(x,y)==0){
        int currPlayer=2;
        int temp=max(x,y);
        int count=1;
        for(int i=0;i<n-1;i++){
            if(!temp){
                temp=max(x,y);
                currPlayer=count*max(x,y)+2;
                count++;
            }
            temp--;
            cout<<currPlayer<<" ";
            
        }
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
    }

}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       mil_ja_sim_sim();
    }
    return 0;
}