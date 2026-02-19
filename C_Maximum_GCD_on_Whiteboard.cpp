#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long k;
    if (!(cin >> n >> k)) return;

    vector<int> a(n);
    int max_val = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > max_val) max_val = a[i];
    }

    if (max_val == 0) {
        cout << "1\n";
        return;
    }

    vector<int> cnt(max_val + 1, 0);
    for (int x : a) {
        cnt[x]++;
    }

    vector<int> pref(max_val + 1, 0);
    pref[0] = cnt[0];
    for (int i = 1; i <= max_val; i++) {
        pref[i] = pref[i - 1] + cnt[i];
    }

    auto get_cnt = [&](int l, int r) {
        if (l > max_val) return 0;
        if (r > max_val) r = max_val;
        if (l > r) return 0;
        if (l == 0) return pref[r];
        return pref[r] - pref[l - 1];
    };

    for (int g = max_val; g >= 1; g--) {
        long long limit = 4LL * g - 1;
        int r_bound = (limit > max_val) ? max_val : (int)limit;
        
        // Count all numbers in range [1, 4g-1]
        int expensive = get_cnt(1, r_bound);
        
        // Subtract those that are multiples of g in that range (g, 2g, 3g)
        if (g <= max_val) expensive -= cnt[g];
        if (2LL * g <= max_val) expensive -= cnt[2 * g];
        if (3LL * g <= max_val) expensive -= cnt[3 * g];
        
        if (expensive <= k) {
            cout << g << "\n";
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
