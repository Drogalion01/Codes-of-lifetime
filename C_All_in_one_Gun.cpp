#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, h, k;
    cin >> n >> h >> k;
    vector <long long> a(n);
    vector <pair<long long, int>> tmp(n);
    for(auto& x : a) cin >> x;
    
    for(int i = n-1; i >= 0; i--){
        tmp[i].first = a[i];
        tmp[i].second = i;
    }
    
    sort (tmp.begin(), tmp.end());

    vector<long long> pref(n+1, 0);
    for(int i = 0; i < n; i++) {
        pref[i+1] = pref[i] + a[i];
    }
    
    auto itn = min_element (a.begin(), a.end());

    long long c = h/pref[n];
    long long r = c*n + c*k;
    if (h%pref[n] == 0) r-=k;

    cout << r << endl;
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