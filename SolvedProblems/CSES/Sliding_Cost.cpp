#include<bits/stdc++.h>
using namespace std;
//In The Name Of Allah
//The Lord Of Mercy, The Giver Of Mercy
//Which of Allah's blessings can you deny?
typedef long long ll;
#define endl "\n"
#define all(v) v.begin(),v.end()

ll n, k;
vector<ll>arr;
multiset<ll> up;
multiset<ll> low;
ll costLow, costUp;

void insert(ll val) {
	ll a = *low.rbegin();
	if (a < val) {
		up.insert(val);
		costUp += val;
		if (up.size() > k / 2) {
			ll moving = *up.begin();
			low.insert(moving);
			costLow += moving;
			up.erase(up.find(moving));
			costUp -= moving;
		}
	} else {
		low.insert(val);
		costLow += val;
		if (low.size() > (k + 1) / 2) {
			ll moving = *low.rbegin();
			up.insert(*low.rbegin());
			costUp += moving;
			low.erase(low.find(*low.rbegin()));
			costLow -= moving;
		}
	}
}

void erase(ll val) {
	if (up.find(val) != up.end()) up.erase(up.find(val)), costUp -= val;
	else low.erase(low.find(val)), costLow -= val;
	if (low.empty()) {
		ll moving = *up.begin();
		low.insert(*up.begin());
		costLow += moving;
		up.erase(up.find(*up.begin()));
		costUp -= moving;
	}
}

ll median() { return (k % 2 == 0) ? 0 : (*low.rbegin()); }

int main() {
	cin >> n >> k;
    arr.assign(n,0);
	for(ll &i:arr){
        cin>>i;
    }
	low.insert(arr[0]);
	costLow += arr[0];
	for (ll i = 1; i < k; i++) insert(arr[i]);
	cout << costUp - costLow + median();
	if (n != 1) cout << " ";
	for (ll i = k; i < n; i++) {
		if (k == 1) {
			insert(arr[i]);
			erase(arr[i - k]);
		} else {
			erase(arr[i - k]);
			insert(arr[i]);
		}
		cout << costUp - costLow + median();
		if (i != n - 1) cout << " ";
	}
	cout << endl;
}