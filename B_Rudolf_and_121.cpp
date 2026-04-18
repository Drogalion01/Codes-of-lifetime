#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>a(n);
    for(auto& x : a) cin >> x;
    ll t=a[0], rem = 0;
    for(int i = 0; i < n-1; i++){
        if(i+2 == n && (rem != a[i+1] || t != 0)) {
            cout << "NO" << endl;
            return;
        }
        if(t*2 > a[i+1]-rem) {
            if(i+2==n && rem == a[i+1] && t == 0) break;
            cout << "NO" << endl;
            return;
        }
        int tmp = a[i+1] - rem;
        rem = t;
        t = tmp - 2*t;
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