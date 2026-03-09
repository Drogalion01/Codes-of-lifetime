#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    int x, y;
    cin >> x >> y;
    vector <pair<int, int>> a(n);
    for(int i = 0; i < k; i++){
        cin >> a[i].first >> a[i].second;
    }
    int nr = max(1, y - 1), su = min (n, y + 1), ea = max(1, x - 1), we = min (m, x + 1);
    cout << nr << " "  << su << " " << ea << " " << we << endl;
    if(k > 3) {
        // int nr = max(1, y - 1), su = min (n, y + 1), ea = max(1, x - 1), we = min (m, x + 1);
        
    }

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