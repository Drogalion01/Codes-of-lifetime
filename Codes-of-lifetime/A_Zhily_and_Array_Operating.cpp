#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    vector<ll>a(n);
    for(auto& x : a) cin >> x;
    ll tmp = 0, ans = 0;
    for(int i = n-1; i > 0; i--){
        if(a[i] + a[i-1] > 0 && (abs(a[i]) > abs(a[i-1]) || (a[i] > 0 && a[i-1] > 0))) a[i-1] += a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i]>0) ans++;
    }
    cout << ans << endl;
    
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