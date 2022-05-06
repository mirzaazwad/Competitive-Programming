#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int first,second,third,fourth;//calories burnt on touching nth strip
    cin>>first>>second>>third>>fourth;
    string stripAppearance;
    cin>>stripAppearance;
    int totalCalories=0;
    int stripAppearanceLength=stripAppearance.length();
    for(int i=0; i<stripAppearanceLength;i++)
    {
        switch(stripAppearance[i])
        {
            case '1': 
                totalCalories+=first;
                break;
            case '2': 
                totalCalories+=second;
                break;
            case '3': 
                totalCalories+=third;
                break;
            case '4': 
                totalCalories+=fourth;
                break;
        }
    }
    cout<<totalCalories<<endl;

    return 0;
}