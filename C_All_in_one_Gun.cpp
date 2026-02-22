#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, h, k;
    cin >> n >> h >> k;
    vector <long long> a(n);
    vector <long long> tmp(n);
    for(auto& x : a) cin >> x;
    tmp = a;
    for(int i = 0; i <= n/2; i++){
        auto it1 = max_element(tmp.begin(), tmp.end());
        auto it2 = min_element(tmp.begin(), tmp.end());

        long long mx = *it1, mn = *it2, idx = it1-tmp.begin(), idn = it2 - tmp.begin();
    
        if(idx >= idn && mx && mn) {
            a[idx] = mn;
            a[idn] = mx;
            break;
        }
        else {
            tmp[idx] = 0;
            tmp[idn] = 0;
        }
    }
    
    
    // for(auto x : a) cout << x << " ";
    // cout << endl;
    vector<long long> pref(n+1, 0);
    for(int i = 0; i < n; i++) {
        pref[i+1] = pref[i] + a[i];
    }
    // for(auto x : pref) cout << x << " ";
    // cout << endl;

    if(pref[n] < h && h % pref[n]){
        long long t = (h/pref[n])*(n+k);

        h %= pref[n];
        long long i = 1;
        while(i < n+1){
            t++;
            if(h - pref[i] <= 0) break;
            i++;
        }
        cout << t << endl;
        // cout << "1" << endl;
        return;
    }
    else if(h >= pref[n] && h % pref[n] == 0){
            long long t = (h/pref[n])*(n+k) - k;
            cout << t << endl;
            // cout << "2" << endl;
            return;
    }
    else if(h < pref[n]){
        long long t = 0, i = 1;
        while(i < n+1){
            t++;
            if(h - pref[i] <= 0) break;
            i++;
        }
        cout << t << endl;
        // cout << "3" << endl;
        return;
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