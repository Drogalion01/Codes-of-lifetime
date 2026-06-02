#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n), tmp(n);
    for(auto& x : a) cin >> x;
    ll w = 0;
    tmp = a;
    sort(tmp.rbegin(), tmp.rend());
    
    ll sum = 0;
    for(auto& x : a) sum += x;

    ll pref = 0, pref1 = 0, mx = -10e9, ans = 0;
    for(int i = 0; i < n; i++) {
        ans = pref + pref1 + a[i] - sum;

        mx = max(mx, ans);
        if(i==0) pref+=a[0];
        else pref += abs(a[i]);
        pref1+=a[i];
    }
    cout << mx << endl;
    // int l = 0, r = 1;
    // for(int i = 0; i + 1 < n; i++) {
    //     if(l < n && r < n && a[l] >= -a[r]) {
    //         w+=a[l];
    //         l=r;
    //         r++;
    //     }
    //     else if(l < n && r < n && a[l] < -a[r]) {
    //         bool flag = false;
    //         int k = r;
    //         ll tot = 0;
    //         while(k < n) {
    //             if(tot < tot-a[k] && tot-a[k] > a[l]) break;
    //             tot-=a[k++];
    //             if(tot < a[l]) {
    //                 flag = true;
    //                 break;
    //             }
    //         }
    //         if(flag) {
    //             w+=a[l];
    //             l=r;
    //             r++;
    //         }
    //         else {
    //             w-=a[r];
    //             r++;
    //         }
    //     }
    //     // cout << "w: " << w << endl;
    // }
    // cout << w << endl;
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