#include<bits/stdc++.h>
using namespace std;
int mex(const vector<int>& a, int n) {
    vector<int> seen(n + 1, 0);
    for (int x : a) {
        if (0 <= x && x <= n) {
            seen[x] = 1;
        }
    }
    for (int i = 0; i <= n; i++) {
        if (!seen[i]) {
            return i;
        }
    }
    return n + 1;
}
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto& x : a) cin >> x;

    int m = mex(a, n);
    cout << min(k - 1, m) << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while(test_case--){
        solve();
    }
    return 0;
}