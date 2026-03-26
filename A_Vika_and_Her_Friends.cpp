#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    int x, y;
    cin >> x >> y;
    vector <pair<int, int>> a(k);
    for(int i = 0; i < k; i++){
        cin >> a[i].first >> a[i].second;
    }
    for(int i = 0; i < k; i++){
        if((abs(x-a[i].first) + abs(y-a[i].second))%2 == 0) {
            cout << "NO" << endl;
            return;
        }
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