#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(auto& x : a) cin >> x;
    int cnt = 0, t = 0;
    for(int i = 0; i < n; i++){
        if(a[i]%2) cnt++;
    }

    if(cnt%2 || k%2==0 || n%2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
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