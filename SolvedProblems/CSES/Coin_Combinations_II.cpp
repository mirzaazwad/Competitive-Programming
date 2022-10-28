#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;

// This code is
ll count(ll coins[], int n, ll sum)
{
	// table[i] will be storing the number of solutions for
	// value i. We need sum+1 rows as the table is
	// constructed in bottom up manner using the base case
	// (sum = 0)
	ll table[sum + 1];

	// Initialize all table values as 0
	memset(table, 0, sizeof(table));

	// Base case (If given value is 0)
	table[0] = 1;

	// Pick all coins one by one and update the table[]
	// values after the index greater than or equal to the
	// value of the picked coin
	for (int i = 0; i < n; i++)
		for (int j = coins[i]; j <= sum; j++){
			table[j] += table[j - coins[i]];
            table[j]%=mod;
        }
            
	return table[sum];
}

// Driver Code
int main()
{
    int n; ll m;
    cin>>n>>m;
    ll coins[n];
    for(int i=0;i<n;i++)cin>>coins[i];
	cout << count(coins, n, m)<<endl;
	return 0;
}
