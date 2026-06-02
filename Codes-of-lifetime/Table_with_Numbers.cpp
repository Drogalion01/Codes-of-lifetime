#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n, h, l;
        cin >> n >> h >> l;
        vector<int> a(n);
        for (auto &x : a) cin >> x;
        if (h > l) swap(h, l);
        int cnth = 0, cntl = 0;
        for(int i = 0; i < n; i++){
            if(a[i] <= h) cnth++;
            if(a[i] <= l) cntl++;
        }
        cout << min(cnth, cntl/2) << endl;
    }
    return 0;
}