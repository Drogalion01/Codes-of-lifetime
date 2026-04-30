#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n, x;
    cin >> n >> x;
    ll ans;
    bool pos = false;
    for(int i = 0; i < n; i++){
        ll a, b, c, tmp = 0;
        cin >> a >> b >> c;
        if(a*b <= c && a*(b-1) < x) continue;
        else {
            pos = true;
            ll p = a*b-c;
            if(a*b-c <= 0 || a*(b-1) >= x) tmp = 0;
            else {
                tmp = (x-p+1)/p;
                if(x > tmp*p + a*(b-1)) tmp++;
                if(x>(tmp+1)*p) tmp++;
            }
        } 
        if(i == 0) ans = tmp;
        else ans = min(tmp, ans);
    }
    if(pos) cout << ans << endl;
    else cout << -1 << endl;
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