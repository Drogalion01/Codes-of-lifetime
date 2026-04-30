#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n, x;
    cin >> n >> x;
    ll ans;
    vector<ll> a(n), b(n), c(n);
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i] >> c[i]; 
    }
    ll base = 0;
    for(int i = 0; i < n; i++){
        base+=a[i]*(b[i]-1);
    }
    ll p=0;
    for(int i = 0; i < n; i++){
        p = max(p, a[i]*b[i]-c[i]);
    }
    if(p<=0) cout << -1 << endl;
    else if(base >= x) cout << 0 << endl;
    else cout << (x-base+p-1)/p << endl;
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