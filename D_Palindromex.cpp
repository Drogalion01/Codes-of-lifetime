#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int mex(vector<ll>& arr, int l, int r) {
    map<ll, int> cnt;
    for(int i = l; i <= r; i++) {
        cnt[arr[i]]++;
    }
    int mex = 0;
    while(cnt[mex] > 0) mex++;
    return mex;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(2*n);
    for(auto& x : a) cin >> x;
    int mx = 0;
    for(int c = 0; c < 2*n; c++) {
        int l = c, r = c;
        while(l >= 0 && r < 2*n && a[l] == a[r]) {
            int tmp = mex(a, l, r);
            mx = max(tmp, mx);
            l--;
            r++;
        }
    }
    
    for(int c = 0; c < 2*n - 1; c++) {
        int l = c, r = c + 1;
        while(l >= 0 && r < 2*n && a[l] == a[r]) {
            int tmp = mex(a, l, r);
            mx = max(tmp, mx);
            l--;
            r++;
        }
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