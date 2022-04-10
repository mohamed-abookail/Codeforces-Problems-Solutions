/**
*    author:  Mohamed Abo Okail
*    created: 1O/O4/2O22
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
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector < ll > a(n), b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		for (int i = 0; i < n; i++) {
			if(a[i] < b[i]) {
				swap(a[i], b[i]);
			}
		}
		ll ans = 0;
		for (int i = 1; i < n; i++) {
			ans += abs(a[i] - a[i - 1]);
			ans += abs(b[i] - b[i - 1]);
		}
		cout << ans << endl;
	}
}