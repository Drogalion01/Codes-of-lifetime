#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    int a[n];
    for(auto& x : a) cin >> x;

    int c = 0, mx = 0;
    for(int i = 0; i < n; i++){
        if (a[i] == 0) {
            ++c;
            mx = max(mx, c);
        }
        else c = 0;
    }
    cout << mx << endl;

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