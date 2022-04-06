/**
*    author:  Mohamed Abo Okail
*    created: O6/O4/2O22
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define all(x) x.begin(),x.end()
#define sz(x) int(x.size())
#define endl "\n";
 
int main() {
	std::ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
	int n, d;
	cin >> n >> d;
	vector < pair < ll , ll > > a(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(all(a));
	for (int i = 1; i <= n; i++) {
		a[i].second += a[i - 1].second;
	}
	ll ans = 0, indx = 1;
	a[0].first = a[1].first;
	for (int i = 1; i <= n; i++) {
		while(a[i].first - a[indx].first >= d) {
			indx++;
		}
		ans = max(ans, a[i].second - a[indx - 1].second);
		if(i == indx) {
			ans = max(ans, a[i].second - a[i - 1].second);
		}
	}
	cout << ans << endl;
}