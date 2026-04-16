#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
    LL n, m;
    cin >> n >> m;

    vector<LL> a(n);
    for (auto& x : a) cin >> x;

    LL t = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            t++;
        } else {
            t = 1;
        }
        if (t >= m) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;
    while (test_case--) {
        solve();
    }
    return 0;
}
