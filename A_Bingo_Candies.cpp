#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n, 0));
    map<int, int> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            m[a[i][j]]++;
        }
    } 
    auto mx = max_element(m.begin(), m.end(),
            [](const pair<int, int>& p1, const pair<int, int>& p2) {
                return p1.second < p2.second; 
            });
    if(mx->second > n*n-n) cout << "NO" << endl;
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