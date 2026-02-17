#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> a(n);
    vector<int> idx(n);
    int m = 0;
    for(auto& x : p) {
        cin >> x;
        idx[x-1] = m;
        m++;
    }
    vector<vector<int>> t(n, vector<int>(2));
    m = 0;
    for(int i = 0; i<n; i++) {
        cin >> a[i];
        if(m && t[m-1][1] == t[m][1]) continue;
        t[m][0] = i;
        t[m][1] = a[i];
        m++;
    }

    vector<int> rec(n, 0);
    bool apr = false;
    for(int i = 0; i < n; i++){
        if(i && a[i]==a[i-1]) continue;
        if(rec[a[i]-1] != 0){
            cout << "NO" << endl;
            return;
        }
        rec[a[i]-1]++;
    }

    sort(t.begin(), t.end());
    
    bool g = true;
    int seq = idx[t[0][1]-1];
    for(int i = 1; i < t.size(); i++){
        if(seq > idx[t[i][1]-1]) {
            cout << "NO" << endl;
            return;
        }
        seq = idx[t[i][1]-1];
    }
    cout << "YES" << endl;
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