#include <bits/stdc++.h>

using namespace std;

void solve()
{

    int n, x, s;
    cin >> n >> x >> s;
    string e;
    cin >> e;
    int emp = x, opn = 0, ans = 0;

    for (int i = 0; i < n; i++) {
        if (e[i] == 'I') {
            if (emp == 0) continue;
            emp--;
            opn += (s - 1);
            ans++;
        }
        else if (e[i] == 'E') {
            if (opn == 0)
                continue;
            opn--;
            ans++;
        }
        else {
            if (opn > 0) {
                opn--;
                ans++;
            }
            else if (emp > 0)
            {
                emp--;
                opn += (s - 1);
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main()
{

    ios::sync_with_stdio(false);

    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}