#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string summand;
    cin >> summand;
    vector<int>numbers;
    int summand_len = summand.length();
    for (int i = 0; i < summand_len;i++) {
        if(summand[i]!='+'){
            numbers.push_back(summand[i]-'0');
        }
    }
    sort(numbers.begin(),numbers.end());
    summand_len = numbers.size();
    cout<<numbers[0];
    for (int i = 1; i < summand_len;i++) {
        cout<<'+'<<numbers[i];
    }
    cout<<endl;
    return 0;
}