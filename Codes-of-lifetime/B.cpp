#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;
	while (t--) {
		int n;
		cin >> n;
		long long sum = 0, best = 10e9;
		for (int i = 1; i <= n; i++) {
			long long x;
			cin >> x;
			sum += x;
			long long avg3 = sum / i; 
			if (avg < best) best = avg;
			cout << best << " ";
		}
        cout << endl;
	}
	return 0;
}
