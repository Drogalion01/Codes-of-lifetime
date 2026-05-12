#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int t = count(a.begin(), a.end(), '(') + count(b.begin(), b.end(), '(');

    if (t != n) {
        cout << "NO" << endl;
        return;
    }

    int bala = 0, balb = 0;
    bool ok = true;

    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            if (a[i] == '(') { 
                bala++; 
                balb++; 
            }
            else { 
                bala--; 
                balb--; 
            }
        } else {
            if (bala <= balb) { 
                bala++; 
                balb--; 
            }
            else { 
                bala--; 
                balb++; 
            }
        }
        if (bala < 0 || balb < 0) { ok = false; break; }
    }

    cout << (ok ? "YES" : "NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) solve();
}