#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector <int> a(n);
    for(auto& x : a) {
        cin >> x;
        if(x < 0) x *= (-1);
    }

    int tmp = a[0];
    sort (a.begin(), a.end());
    int idx = find(a.begin(), a.end(), tmp) - a.begin();
    if(n/2 < idx) cout << "NO" << endl;
    else cout << "YES" << endl;
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