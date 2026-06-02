#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        for(auto x : a) cout << x << " ";
        cout << endl;

        int tmp = n;
        int i = 0;
        while (i < n) {
            int j = i + 1;
            while (j < n && a[j] == a[i]) ++j;
            int L = i;
            int R = n - j;
            int c = max(L, R);
            if (c < tmp) tmp = c;
            i = j;
        }
        cout << tmp << endl;
    }
    return 0;
}