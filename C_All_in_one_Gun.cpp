#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, h, k;
    cin >> n >> h >> k;
    vector <long long> a(n);
    vector <pair<long long, long long>> tmp(n);
    vector<pair<int, int>> idx(n);
    for(auto& x : a) cin >> x;
    
    tmp[n-1].first = a[n-1];
    idx[n-1].first = n-1;
    tmp[0].second = a[0];
    idx[0].second = 0;
    for(int j = n-2; j >= 0; j--){
        if(a[j] >= tmp[j+1].first) {
            tmp[j].first = a[j];
            idx[j].first = j;
        }
        else {
            tmp[j].first = tmp[j+1].first;
            idx[j].first = idx[j+1].first;
        }
    }

    for(int i = 1; i < n; i++){
        if(tmp[i-1].second > a[i]) idx[i].second = i;
        else idx[i].second = idx[i-1].second;
        tmp[i].second = min(tmp[i-1].second, a[i]);
    }

    long long sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    
    long long cy = h/sum;
    long long time = cy*n + max(0LL,(cy-1))*k;

    if(h%sum == 0) cout << time << endl;
    else {
        if(cy>0) time += k;

        long long rem = h%sum;
        vector<long long> pref(n+1, 0);

        for(int i = 0; i < n; i++){
            pref[i+1] = pref[i]+a[i];
        }

        for(long long i = 1; i <= n; i++){
            long long hobe = pref[i];
            if(i<n) hobe = max (pref[i], pref[i] - tmp[i-1].second + tmp[i].first);
            
            // cout << idx[i-1].first << " " << rem << " " << hobe << " " << pref[i] << " " << tmp[i-1].second << " " << tmp[i-1].first << endl;
            if(hobe >= rem) {
                time++;
                cout << time << endl;
                return;
            }
            else time++;
        }
        cout << time << endl;
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